	.file	"sizes.cpp"
	.intel_syntax noprefix
 # GNU C++14 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT sizes.cpp -masm=intel -mtune=core2 -march=nocona
 # -auxbase-strip sizes.s -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations
 # -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
 # -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
 # -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
 # -fchkp-use-static-bounds -fchkp-use-static-const-bounds
 # -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -fexceptions -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm
 # -fgnu-runtime -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
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
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 160	 #,
	.seh_stackalloc	160
	.seh_endprologue
 # sizes.cpp:16: int main(){
	call	__main	 #
 # sizes.cpp:17:     node n = {"aa", "bb", 10, "cc", {1, 2.2}};
	mov	QWORD PTR -80[rbp], 24929	 # n.id,
	mov	BYTE PTR -72[rbp], 0	 # n.id,
	mov	QWORD PTR -71[rbp], 25186	 # n.name,
	mov	QWORD PTR -63[rbp], 0	 # n.name,
	mov	DWORD PTR -52[rbp], 10	 # n.post,
	mov	QWORD PTR -48[rbp], 25443	 # n.phone,
	mov	QWORD PTR -40[rbp], 0	 # n.phone,
	mov	DWORD PTR -32[rbp], 0	 # n.phone,
	mov	BYTE PTR -28[rbp], 0	 # n.phone,
	movss	xmm0, DWORD PTR .LC0[rip]	 # tmp89,
	movss	DWORD PTR -24[rbp], xmm0	 # n.fl, tmp89
	movss	xmm0, DWORD PTR .LC1[rip]	 # tmp90,
	movss	DWORD PTR -20[rbp], xmm0	 # n.fl, tmp90
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
	mov	DWORD PTR -4[rbp], 0	 # i,
.L4:
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
	cmp	DWORD PTR -4[rbp], 9	 # i,
	jg	.L2	 #,
 # sizes.cpp:19:         if (i < 9)
	cmp	DWORD PTR -4[rbp], 8	 # i,
	jg	.L3	 #,
 # sizes.cpp:20:             i++;
	add	DWORD PTR -4[rbp], 1	 # i,
.L3:
 # sizes.cpp:21:         cout << i;
	mov	eax, DWORD PTR -4[rbp]	 # tmp91, i
	mov	edx, eax	 #, tmp91
	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]	 #,
	call	_ZNSolsEi	 #
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
	add	DWORD PTR -4[rbp], 1	 # i,
	jmp	.L4	 #
.L2:
 # sizes.cpp:23:     int i[10] = {1,2,3, 4, 5, 6, 7, 8, 9, 10};
	mov	DWORD PTR -128[rbp], 1	 # i,
	mov	DWORD PTR -124[rbp], 2	 # i,
	mov	DWORD PTR -120[rbp], 3	 # i,
	mov	DWORD PTR -116[rbp], 4	 # i,
	mov	DWORD PTR -112[rbp], 5	 # i,
	mov	DWORD PTR -108[rbp], 6	 # i,
	mov	DWORD PTR -104[rbp], 7	 # i,
	mov	DWORD PTR -100[rbp], 8	 # i,
	mov	DWORD PTR -96[rbp], 9	 # i,
	mov	DWORD PTR -92[rbp], 10	 # i,
 # sizes.cpp:25:     j = i[8];
	mov	eax, DWORD PTR -96[rbp]	 # tmp92, i
	mov	DWORD PTR -8[rbp], eax	 # j, tmp92
 # sizes.cpp:27:     return 0;
	mov	eax, 0	 # _28,
 # sizes.cpp:28: }
	add	rsp, 160	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	lea	rcx, _ZStL8__ioinit[rip]	 #,
	call	_ZNSt8ios_base4InitD1Ev	 #
	nop	
	add	rsp, 32	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
	mov	DWORD PTR 16[rbp], ecx	 # __initialize_p, __initialize_p
	mov	DWORD PTR 24[rbp], edx	 # __priority, __priority
 # sizes.cpp:28: }
	cmp	DWORD PTR 16[rbp], 1	 # __initialize_p,
	jne	.L9	 #,
 # sizes.cpp:28: }
	cmp	DWORD PTR 24[rbp], 65535	 # __priority,
	jne	.L9	 #,
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	lea	rcx, _ZStL8__ioinit[rip]	 #,
	call	_ZNSt8ios_base4InitC1Ev	 #
	lea	rcx, __tcf_0[rip]	 #,
	call	atexit	 #
.L9:
 # sizes.cpp:28: }
	nop	
	add	rsp, 32	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # sizes.cpp:28: }
	mov	edx, 65535	 #,
	mov	ecx, 1	 #,
	call	_Z41__static_initialization_and_destruction_0ii	 #
	nop	
	add	rsp, 32	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1065353216
	.align 4
.LC1:
	.long	1074580685
	.ident	"GCC: (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
