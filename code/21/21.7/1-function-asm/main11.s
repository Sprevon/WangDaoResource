	.file	"main.c"
	.intel_syntax noprefix
 # GNU C17 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT main.c -masm=intel -mtune=core2 -march=nocona
 # -auxbase-strip main11.s -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations
 # -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
 # -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
 # -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
 # -fchkp-use-static-bounds -fchkp-use-static-const-bounds
 # -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm -fgnu-runtime
 # -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
 # -fpeephole -fpic -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fshrink-wrap-separate
 # -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss
 # -m128bit-long-double -m64 -m80387 -maccumulate-outgoing-args
 # -malign-double -malign-stringops -mcx16 -mfancy-math-387 -mfentry
 # -mfp-ret-in-387 -mfxsr -mieee-fp -mlong-double-80 -mmmx -mms-bitfields
 # -mno-sse4 -mpush-args -mred-zone -msse -msse2 -msse3 -mstack-arg-probe
 # -mstackrealign -mvzeroupper

	.text
	.globl	add
	.def	add;	.scl	2;	.type	32;	.endef
	.seh_proc	add
add:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 16	 #,
	.seh_stackalloc	16
	.seh_endprologue
	mov	DWORD PTR 16[rbp], ecx	 # a, a
	mov	DWORD PTR 24[rbp], edx	 # b, b
 # main.c:5:     ret = a + b;
	mov	edx, DWORD PTR 16[rbp]	 # tmp93, a
	mov	eax, DWORD PTR 24[rbp]	 # tmp94, b
	add	eax, edx	 # tmp92, tmp93
	mov	DWORD PTR -4[rbp], eax	 # ret, tmp92
 # main.c:6:     return ret;
	mov	eax, DWORD PTR -4[rbp]	 # _4, ret
 # main.c:7: }
	add	rsp, 16	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "add result=%d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 64	 #,
	.seh_stackalloc	64
	.seh_endprologue
 # main.c:9: int main() {
	call	__main	 #
 # main.c:12:     a = 5;
	mov	DWORD PTR -20[rbp], 5	 # a,
 # main.c:13:     p = &a;
	lea	rax, -20[rbp]	 # tmp91,
	mov	QWORD PTR -8[rbp], rax	 # p, tmp91
 # main.c:14:     b = *p + 2;
	mov	rax, QWORD PTR -8[rbp]	 # tmp92, p
	mov	eax, DWORD PTR [rax]	 # _1, *p_5
 # main.c:14:     b = *p + 2;
	add	eax, 2	 # tmp93,
	mov	DWORD PTR -12[rbp], eax	 # b, tmp93
 # main.c:15:     ret = add(a, b);
	mov	eax, DWORD PTR -20[rbp]	 # a.0_2, a
	mov	edx, DWORD PTR -12[rbp]	 # tmp94, b
	mov	ecx, eax	 #, a.0_2
	call	add	 #
	mov	DWORD PTR -16[rbp], eax	 # ret, tmp95
 # main.c:16:     printf("add result=%d\n", ret);
	mov	eax, DWORD PTR -16[rbp]	 # tmp96, ret
	mov	edx, eax	 #, tmp96
	lea	rcx, .LC0[rip]	 #,
	call	printf	 #
 # main.c:17:     return 0;
	mov	eax, 0	 # _10,
 # main.c:18: }
	add	rsp, 64	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.ident	"GCC: (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
