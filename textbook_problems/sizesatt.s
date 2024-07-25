	.file	"sizes.cpp"
 # GNU C++14 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT sizes.cpp -mtune=core2 -march=nocona
 # -auxbase-strip sizesatt.s -fverbose-asm
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
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$160, %rsp	 #,
	.seh_stackalloc	160
	.seh_endprologue
 # sizes.cpp:16: int main(){
	call	__main	 #
 # sizes.cpp:17:     node n = {"aa", "bb", 10, "cc", {1, 2.2}};
	movq	$24929, -80(%rbp)	 #, n.id
	movb	$0, -72(%rbp)	 #, n.id
	movq	$25186, -71(%rbp)	 #, n.name
	movq	$0, -63(%rbp)	 #, n.name
	movl	$10, -52(%rbp)	 #, n.post
	movq	$25443, -48(%rbp)	 #, n.phone
	movq	$0, -40(%rbp)	 #, n.phone
	movl	$0, -32(%rbp)	 #, n.phone
	movb	$0, -28(%rbp)	 #, n.phone
	movss	.LC0(%rip), %xmm0	 #, tmp89
	movss	%xmm0, -24(%rbp)	 # tmp89, n.fl
	movss	.LC1(%rip), %xmm0	 #, tmp90
	movss	%xmm0, -20(%rbp)	 # tmp90, n.fl

#循环初始化
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
       #原操作数   #目标操作数
	movl	$0, -4(%rbp)	 #, i
#循环体运行
.L4:
 #循环判断
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
	cmpl	$9, -4(%rbp)	 #, i
	# 若大于则跳出循环
	jg	.L2	 #,
 #内部条件判断
 # sizes.cpp:19:         if (i < 9)
	cmpl	$8, -4(%rbp)	 #, i
	# 若大于则跳出if内容，直接开始执行本体
	jg	.L3	 #,
 # sizes.cpp:20:             i++;
	addl	$1, -4(%rbp)	 #, i
#循环内容
.L3:
 # sizes.cpp:21:         cout << i;
	movl	-4(%rbp), %eax	 # i, tmp91
	movl	%eax, %edx	 # tmp91,
	movq	.refptr._ZSt4cout(%rip), %rcx	 #,
	call	_ZNSolsEi	 #
#自增并返回
 # sizes.cpp:18:     for (int i = 0; i < 10; i ++){
	addl	$1, -4(%rbp)	 #, i
	jmp	.L4	 #

#循环结束
.L2:
 # sizes.cpp:23:     int i[10] = {1,2,3, 4, 5, 6, 7, 8, 9, 10};
	movl	$1, -128(%rbp)	 #, i
	movl	$2, -124(%rbp)	 #, i
	movl	$3, -120(%rbp)	 #, i
	movl	$4, -116(%rbp)	 #, i
	movl	$5, -112(%rbp)	 #, i
	movl	$6, -108(%rbp)	 #, i
	movl	$7, -104(%rbp)	 #, i
	movl	$8, -100(%rbp)	 #, i
	movl	$9, -96(%rbp)	 #, i
	movl	$10, -92(%rbp)	 #, i
 # sizes.cpp:25:     j = i[8];
	movl	-96(%rbp), %eax	 # i, tmp92
	movl	%eax, -8(%rbp)	 # tmp92, j
 # sizes.cpp:27:     return 0;
	movl	$0, %eax	 #, _28
 # sizes.cpp:28: }
	addq	$160, %rsp	 #,
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
 # sizes.cpp:28: }
	cmpl	$1, 16(%rbp)	 #, __initialize_p
	jne	.L9	 #,
 # sizes.cpp:28: }
	cmpl	$65535, 24(%rbp)	 #, __priority
	jne	.L9	 #,
 # D:/Visual Studio/Code/C language/C/c compiler/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rcx	 #,
	call	_ZNSt8ios_base4InitC1Ev	 #
	leaq	__tcf_0(%rip), %rcx	 #,
	call	atexit	 #
.L9:
 # sizes.cpp:28: }
	nop	
	addq	$32, %rsp	 #,
	popq	%rbp	 #
	ret	
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
	pushq	%rbp	 #
	.seh_pushreg	%rbp
	movq	%rsp, %rbp	 #,
	.seh_setframe	%rbp, 0
	subq	$32, %rsp	 #,
	.seh_stackalloc	32
	.seh_endprologue
 # sizes.cpp:28: }
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
