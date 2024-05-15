	.file	"assember.cpp"
	.intel_syntax noprefix
 # GNU C++14 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT assember.cpp -masm=intel -mtune=core2 -march=nocona
 # -auxbase-strip assember1.s -fverbose-asm
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
	.text
	.globl	_Z3addii
	.def	_Z3addii;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z3addii
_Z3addii:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	.seh_endprologue
	mov	DWORD PTR 16[rbp], ecx	 # x, x
	mov	DWORD PTR 24[rbp], edx	 # y, y
 # assember.cpp:8:     return x + y;
	mov	edx, DWORD PTR 16[rbp]	 # tmp89, x
	mov	eax, DWORD PTR 24[rbp]	 # tmp90, y
	add	eax, edx	 # _3, tmp89
 # assember.cpp:9: }
	pop	rbp	 #
	ret	
	.seh_endproc
	.globl	_Z6callerv
	.def	_Z6callerv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z6callerv
_Z6callerv:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 48	 #,
	.seh_stackalloc	48
	.seh_endprologue
 # assember.cpp:12:     int temp1 = 125;
	mov	DWORD PTR -4[rbp], 125	 # temp1,
 # assember.cpp:13:     int temp2 = 80;
	mov	DWORD PTR -8[rbp], 80	 # temp2,
 # assember.cpp:14:     int sum = add(temp1, temp2);
	mov	edx, DWORD PTR -8[rbp]	 # tmp89, temp2
	mov	eax, DWORD PTR -4[rbp]	 # tmp90, temp1
	mov	ecx, eax	 #, tmp90
	call	_Z3addii	 #
	mov	DWORD PTR -12[rbp], eax	 # sum, tmp91
 # assember.cpp:15:     return sum;
	mov	eax, DWORD PTR -12[rbp]	 # _6, sum
 # assember.cpp:16: }
	add	rsp, 48	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # assember.cpp:18: int main(){
	call	__main	 #
 # assember.cpp:19:     std::cout << caller() << std::endl;
	call	_Z6callerv	 #
	mov	edx, eax	 #, _1
	mov	rcx, QWORD PTR .refptr._ZSt4cout[rip]	 #,
	call	_ZNSolsEi	 #
 # assember.cpp:19:     std::cout << caller() << std::endl;
	mov	rdx, QWORD PTR .refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_[rip]	 #,
	mov	rcx, rax	 #, _2
	call	_ZNSolsEPFRSoS_E	 #
 # assember.cpp:20: }
	mov	eax, 0	 # _8,
	add	rsp, 32	 #,
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
 # assember.cpp:20: }
	cmp	DWORD PTR 16[rbp], 1	 # __initialize_p,
	jne	.L10	 #,
 # assember.cpp:20: }
	cmp	DWORD PTR 24[rbp], 65535	 # __priority,
	jne	.L10	 #,
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	lea	rcx, _ZStL8__ioinit[rip]	 #,
	call	_ZNSt8ios_base4InitC1Ev	 #
	lea	rcx, __tcf_0[rip]	 #,
	call	atexit	 #
.L10:
 # assember.cpp:20: }
	nop	
	add	rsp, 32	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.def	_GLOBAL__sub_I__Z3addii;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z3addii
_GLOBAL__sub_I__Z3addii:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	rbp, rsp	 #,
	.seh_setframe	rbp, 0
	sub	rsp, 32	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # assember.cpp:20: }
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
	.quad	_GLOBAL__sub_I__Z3addii
	.ident	"GCC: (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
