;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Part one of the system initialization code,
;; contains low-level
;; initialization.
;;
;; Copyright 2011 IAR Systems. All rights reserved.
;;
;; $Revision: 40 $
;;

        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION IRQ_STACK:DATA:NOROOT(3)
        SECTION FIQ_STACK:DATA:NOROOT(3)
        SECTION SVC_STACK:DATA:NOROOT(3)
        SECTION ABT_STACK:DATA:NOROOT(3)
        SECTION UND_STACK:DATA:NOROOT(3)
        SECTION CSTACK:DATA:NOROOT(3)

;
; The module in this file are included in the libraries, and may be
; replaced by any user-defined modules that define the PUBLIC symbol
; __iar_program_start or a user defined start symbol.
;
; To override the cstartup defined in the library, simply add your
; modified version to the workbench project.

       SECTION .intvec:CODE:NOROOT(2)

        PUBLIC  __vector
        PUBLIC  __iar_program_start
        EXTERN  Undefined_Handler
        EXTERN  SWI_Handler
        EXTERN  Prefetch_Handler
        EXTERN  Abort_Handler
        EXTERN  IRQ_Handler
        EXTERN  FIQ_Handler

        ARM

__vector:
        ; All default exception handlers (except reset) are
        ; defined as weak symbol definitions.
        ; If a handler is defined by the application it will take precedence.
        LDR     PC,Reset_Addr           ; Reset
        LDR     PC,Undefined_Addr       ; Undefined instructions
        LDR     PC,SWI_Addr             ; Software interrupt (SWI/SVC)
        LDR     PC,Prefetch_Addr        ; Prefetch abort
        LDR     PC,Abort_Addr           ; Data abort
        DCD     0                       ; RESERVED
        LDR     PC,IRQ_Addr             ; IRQ
        LDR     PC,FIQ_Addr             ; FIQ

        DATA

Reset_Addr:     DCD   __iar_program_start
Undefined_Addr: DCD   Undefined_Handler
SWI_Addr:       DCD   SWI_Handler
Prefetch_Addr:  DCD   Prefetch_Handler
Abort_Addr:     DCD   Abort_Handler
IRQ_Addr:       DCD   IRQ_Handler
FIQ_Addr:       DCD   FIQ_Handler

; --------------------
; Mode, correspords to bits 0-5 in CPSR

MODE_MSK DEFINE 0x1F            ; Bit mask for mode bits in CPSR

USR_MODE DEFINE 0x10            ; User mode
FIQ_MODE DEFINE 0x11            ; Fast Interrupt Request mode
IRQ_MODE DEFINE 0x12            ; Interrupt Request mode
SVC_MODE DEFINE 0x13            ; Supervisor mode
ABT_MODE DEFINE 0x17            ; Abort mode
UND_MODE DEFINE 0x1B            ; Undefined Instruction mode
SYS_MODE DEFINE 0x1F            ; System mode


CP_DIS_MASK         DEFINE  0xFFFFEFFA
VRAM_TEMP_STACK     DEFINE  0xFFFFFD00

        SECTION .text:CODE:NOROOT(2)

        EXTERN  ?main
        REQUIRE __vector
        EXTERN  low_level_init

        ARM

__iar_program_start:
?cstartup:

; Execution starts here.
; After a reset, the mode is ARM, Supervisor, interrupts disabled.
        ; init default state of the CPUs' registers
        mov r0,         lr
        mov r1,         #0x03D0
        mov r2,         #0x0000
        mov r3,         #0x0000
        mov r4,         #0x0000
        mov r5,         #0x0000
        mov r6,         #0x0000
        mov r7,         #0x0000
        mov r8,         #0x0000
        mov r9,         #0x0000
        mov r10,        #0x0000
        mov r11,        #0x0000
        mov r12,        #0x0000
        orr r13,        r1,     #0x0001
        msr cpsr_cxsf,  r13
        msr spsr_cxsf,  r13
        mov lr,         r0
        mov r8,         #0x0000
        mov r9,         #0x0000
        mov r10,        #0x0000
        mov r11,        #0x0000
        mov r12,        #0x0000
        orr r13,        r1,     #0x0002
        msr cpsr_c,     r13
        msr spsr_cxsf,  r13
        mov lr,         r0
        orr r13,        r1,     #0x0007
        msr cpsr_c,     r13
        msr spsr_cxsf,  r13
        mov lr,         r0
        orr r13,        r1,     #0x000B
        msr cpsr_c,     r13
        msr spsr_cxsf,  r13
        mov lr,         r0
        orr r13,        r1,     #0x0003
        msr cpsr_c,     r13
        msr spsr_cxsf,  r13

        bl .+4
        bl .+4
        bl .+4
        bl .+4
        mov r14, #0

        ; Enable ACTM ECC
        MRC p15,#0,r1,c9,c12,#0                     ; Read PMNC register in privileged mode
        ORR r1, r1, #0x00000010                     ; Bit4 enable export of the events to the event bus (send ECC error to the flash wrapper)
        MCR p15,#0,r1,c9,c12,#0                     ; Write PMNC register in privileged mode
        MRC p15, #0,r1,c1,c0,#1                     ; Read Auxiliary control register
        ORR r1, r1, #0x02000000                     ; Bit25 is ATCM ECC check enable
        MCR p15, #0, r1, c1, c0, #1                 ; Write Auxiliary control register
        nop
        nop
        nop
        MRC p15, #0,r1,c1,c0,#1                     ; Read Auxiliary control register
        ORR r1, r1, #0x00000001                     ; Bit0 is ATCM external error into CPU enable
        MCR p15, #0, r1, c1, c0, #1                 ; Write Auxiliary control register

; Initialize the stack pointers.
; The pattern below can be used for any of the exception stacks:
; FIQ, IRQ, SVC, ABT, UND, SYS.
; The USR mode uses the same stack as SYS.
; The stack segments must be defined in the linker command file,
; and be declared above.
        mrs     r0,cpsr                             ; Original PSR value
        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#SVC_MODE                     ; Set Supervisor mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(SVC_STACK)                  ; End of SVC_STACK

        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#ABT_MODE                     ; Set Abort mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(ABT_STACK)                  ; End of ABT_STACK

        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#UND_MODE                     ; Set Undefined mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(UND_STACK)                  ; End of UND_STACK

        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#FIQ_MODE                     ; Set FIR mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(FIQ_STACK)                  ; End of FIQ_STACK

        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#IRQ_MODE                     ; Set IRQ mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(IRQ_STACK)                  ; End of IRQ_STACK

        bic     r0,r0,#MODE_MSK                     ; Clear the mode bits
        orr     r0,r0,#SYS_MODE                     ; Set System mode bits
        msr     cpsr_c,r0                           ; Change the mode
        ldr     sp,=SFE(CSTACK)                     ; End of CSTACK

        MRC   p15,#0x0,r0,c1,c0,#2  ; bits {23:22} of CP11 and {21:20} of CP10
        MOV   r3, #0xf00000
        ORR   r0, r0, r3
        MCR   p15, #0x0, r0, c1, c0, #2
        mrc   p15, #0x0, r0, c0, c0
        ;Set the EN bit of FPEXC[30] to enable Neon/VFP
        MOV   r0, #0x40000000
        VMSR  FPEXC, r0
        VMRS  R1, FPSID

        fmdrr d0,  r1, r1
        fmdrr d1,  r1, r1
        fmdrr d2,  r1, r1
        fmdrr d3,  r1, r1
        fmdrr d4,  r1, r1
        fmdrr d5,  r1, r1
        fmdrr d6,  r1, r1
        fmdrr d7,  r1, r1
        fmdrr d8,  r1, r1
        fmdrr d9,  r1, r1
        fmdrr d10, r1, r1
        fmdrr d11, r1, r1
        fmdrr d12, r1, r1
        fmdrr d13, r1, r1
        fmdrr d14, r1, r1
        fmdrr d15, r1, r1

        mrc   p15, #0, r0,         c1, c0,  #0
        orr   r0,  r0,    #0x01000000
        mcr   p15, #0, r0,         c1, c0,  #0

; Continue to ?main for more IAR specific system startup
        ldr         r0,=?main
        bx          r0


                END

