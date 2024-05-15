	.file	"assember2.cpp"
	.intel_syntax noprefix
 # GNU C++14 (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix D:/Visual Studio/Code/C language/C/c compiler/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -U_REENTRANT assember2.cpp -masm=intel -mtune=core2 -march=nocona
 # -auxbase-strip assember2.s -fverbose-asm
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
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp	 #
	.seh_pushreg	rbp
	mov	eax, 4048	 #,
	call	___chkstk_ms
	sub	rsp, rax	 #,
	.seh_stackalloc	4048
	lea	rbp, 128[rsp]	 #,
	.seh_setframe	rbp, 128
	.seh_endprologue
 # assember2.cpp:4: int main(){
	call	__main	 #
 # assember2.cpp:6:     for(int k = 0; k < 1000; k++){
	mov	DWORD PTR 3916[rbp], 0	 # k,
.L3:
 # assember2.cpp:6:     for(int k = 0; k < 1000; k++){
	cmp	DWORD PTR 3916[rbp], 999	 # k,
	jg	.L2	 #,
 # assember2.cpp:7:         a[k] = 0;
	mov	eax, DWORD PTR 3916[rbp]	 # tmp92, k
	cdqe
	mov	DWORD PTR -96[rbp+rax*4], 0	 # a,
 # assember2.cpp:8:         a[k] = a[k] + 32;
	mov	eax, DWORD PTR 3916[rbp]	 # tmp94, k
	cdqe
	mov	eax, DWORD PTR -96[rbp+rax*4]	 # _1, a
 # assember2.cpp:8:         a[k] = a[k] + 32;
	lea	edx, 32[rax]	 # _2,
 # assember2.cpp:8:         a[k] = a[k] + 32;
	mov	eax, DWORD PTR 3916[rbp]	 # tmp96, k
	cdqe
	mov	DWORD PTR -96[rbp+rax*4], edx	 # a, _2
 # assember2.cpp:6:     for(int k = 0; k < 1000; k++){
	add	DWORD PTR 3916[rbp], 1	 # k,
	jmp	.L3	 #
.L2:
 # assember2.cpp:10: }
	mov	eax, 0	 # _11,
	add	rsp, 4048	 #,
	pop	rbp	 #
	ret	
	.seh_endproc
	.ident	"GCC: (x86_64-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
