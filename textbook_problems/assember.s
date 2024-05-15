	.file	"assember.cpp"
 # GNU C++14 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT assember.cpp -mtune=core2 -march=nocona -fverbose-asm
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
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)	 # x, x
	movl	%edx, 24(%rbp)	 # y, y
 # assember.cpp:8:     return x + y;
	movl	16(%rbp), %edx	 # x, tmp89
	movl	24(%rbp), %eax	 # y, tmp90
	addl	%edx, %eax	 # tmp89, _3
 # assember.cpp:9: }
	popq	%rbp	 #
	ret	
	.seh_endproc
	.globl	_Z6callerv
	.def	_Z6callerv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z6callerv
_Z6callerv:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$48, %rsp	 #,
	.seh_stackalloc	48
	.seh_endprologue
 # assember.cpp:12:     int temp1 = 125;
	movl	$125, -4(%rbp)	 #, temp1
 # assember.cpp:13:     int temp2 = 80;
	movl	$80, -8(%rbp)	 #, temp2
 # assember.cpp:14:     int sum = add(temp1, temp2);
	movl	-8(%rbp), %edx	 # temp2, tmp89
	movl	-4(%rbp), %eax	 # temp1, tmp90
	movl	%eax, %ecx	 # tmp90,
	call	_Z3addii	 #
	movl	%eax, -12(%rbp)	 # tmp91, sum
 # assember.cpp:15:     return sum;
	movl	-12(%rbp), %eax	 # sum, _6
 # assember.cpp:16: }
	addq	$48, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$32, %rsp	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # assember.cpp:18: int main(){
	call	__main	 #
 # assember.cpp:19:     std::cout << caller() << std::endl;
	call	_Z6callerv	 #
	movl	%eax, %edx	 # _1,
	movq	.refptr._ZSt4cout(%rip), %rcx	 #,
	call	_ZNSolsEi	 #
 # assember.cpp:19:     std::cout << caller() << std::endl;
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rdx	 #,
	movq	%rax, %rcx	 # _2,
	call	_ZNSolsEPFRSoS_E	 #
 # assember.cpp:20: }
	movl	$0, %eax	 #, _8
	addq	$32, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$32, %rsp	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rcx	 #,
	call	_ZNSt8ios_base4InitD1Ev	 #
	nop	
	addq	$32, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$32, %rsp	 #,
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)	 # __initialize_p, __initialize_p
	movl	%edx, 24(%rbp)	 # __priority, __priority
 # assember.cpp:20: }
	cmpl	$1, 16(%rbp)	 #, __initialize_p
	jne	.L10	 #,
 # assember.cpp:20: }
	cmpl	$65535, 24(%rbp)	 #, __priority
	jne	.L10	 #,
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rcx	 #,
	call	_ZNSt8ios_base4InitC1Ev	 #
	leaq	__tcf_0(%rip), %rcx	 #,
	call	atexit	 #
.L10:
 # assember.cpp:20: }
	nop	
	addq	$32, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	_GLOBAL__sub_I__Z3addii;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z3addii
_GLOBAL__sub_I__Z3addii:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$32, %rsp	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # assember.cpp:20: }
	movl	$65535, %edx	 #,
	movl	$1, %ecx	 #,
	call	_Z41__static_initialization_and_destruction_0ii	 #
	nop	
	addq	$32, %rsp	 #,
	popq	%rbp	 #
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
