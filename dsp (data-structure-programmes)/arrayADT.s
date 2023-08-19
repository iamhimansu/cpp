	.file	"arrayADT.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.section	.text$_ZN7Helpers8ArrayADT15setArrayPointerEPi,"x"
	.linkonce discard
	.align 2
	.globl	__ZN7Helpers8ArrayADT15setArrayPointerEPi
	.def	__ZN7Helpers8ArrayADT15setArrayPointerEPi;	.scl	2;	.type	32;	.endef
__ZN7Helpers8ArrayADT15setArrayPointerEPi:
LFB1446:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE1446:
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "Trying to access illegal offset.\0"
	.section	.text$_ZN7Helpers8ArrayADT3putEii,"x"
	.linkonce discard
	.align 2
	.globl	__ZN7Helpers8ArrayADT3putEii
	.def	__ZN7Helpers8ArrayADT3putEii;	.scl	2;	.type	32;	.endef
__ZN7Helpers8ArrayADT3putEii:
LFB1450:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA1450
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$60, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	movl	%ecx, -44(%ebp)
	movl	-44(%ebp), %eax
	movl	8(%eax), %eax
	cmpl	8(%ebp), %eax
	jge	L3
	movl	$8, (%esp)
	call	___cxa_allocate_exception
	movl	%eax, %ebx
	movl	$LC0, (%esp)
	movl	%ebx, %ecx
LEHB0:
	call	__ZNSt13runtime_errorC1EPKc
LEHE0:
	subl	$4, %esp
	movl	$__ZNSt13runtime_errorD1Ev, 8(%esp)
	movl	$__ZTISt13runtime_error, 4(%esp)
	movl	%ebx, (%esp)
LEHB1:
	call	___cxa_throw
LEHE1:
L3:
	movl	-44(%ebp), %eax
	movl	4(%eax), %eax
	movl	8(%ebp), %edx
	sall	$2, %edx
	addl	%eax, %edx
	movl	12(%ebp), %eax
	movl	%eax, (%edx)
	jmp	L12
L9:
	movl	%eax, %edi
	movl	%edx, %esi
	movl	%ebx, (%esp)
	call	___cxa_free_exception
	movl	%edi, %eax
	movl	%esi, %edx
	jmp	L5
L10:
L5:
	cmpl	$1, %edx
	je	L7
	movl	%eax, (%esp)
LEHB2:
	call	__Unwind_Resume
LEHE2:
L7:
	movl	%eax, (%esp)
	call	___cxa_begin_catch
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	addl	$8, %eax
	movl	(%eax), %eax
	movl	-28(%ebp), %edx
	movl	%edx, %ecx
	call	*%eax
	movl	%eax, 4(%esp)
	movl	$__ZSt4cout, (%esp)
LEHB3:
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
LEHE3:
	subl	$4, %esp
	movl	$1, (%esp)
	call	_exit
L11:
	movl	%eax, %ebx
	call	___cxa_end_catch
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB4:
	call	__Unwind_Resume
LEHE4:
L12:
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE1450:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
	.align 4
LLSDA1450:
	.byte	0xff
	.byte	0
	.uleb128 LLSDATT1450-LLSDATTD1450
LLSDATTD1450:
	.byte	0x1
	.uleb128 LLSDACSE1450-LLSDACSB1450
LLSDACSB1450:
	.uleb128 LEHB0-LFB1450
	.uleb128 LEHE0-LEHB0
	.uleb128 L9-LFB1450
	.uleb128 0x3
	.uleb128 LEHB1-LFB1450
	.uleb128 LEHE1-LEHB1
	.uleb128 L10-LFB1450
	.uleb128 0x1
	.uleb128 LEHB2-LFB1450
	.uleb128 LEHE2-LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB3-LFB1450
	.uleb128 LEHE3-LEHB3
	.uleb128 L11-LFB1450
	.uleb128 0
	.uleb128 LEHB4-LFB1450
	.uleb128 LEHE4-LEHB4
	.uleb128 0
	.uleb128 0
LLSDACSE1450:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	__ZTISt13runtime_error
LLSDATT1450:
	.section	.text$_ZN7Helpers8ArrayADT3putEii,"x"
	.linkonce discard
	.section	.text$_ZN7Helpers8ArrayADTC1EiPi,"x"
	.linkonce discard
	.align 2
	.globl	__ZN7Helpers8ArrayADTC1EiPi
	.def	__ZN7Helpers8ArrayADTC1EiPi;	.scl	2;	.type	32;	.endef
__ZN7Helpers8ArrayADTC1EiPi:
LFB1454:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	$0, (%eax)
	movl	-12(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 8(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 12(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 16(%eax)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 8(%eax)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT15setArrayPointerEPi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	8(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 12(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE1454:
	.section	.text$_ZN7Helpers8ArrayADT4sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN7Helpers8ArrayADT4sizeEv
	.def	__ZN7Helpers8ArrayADT4sizeEv;	.scl	2;	.type	32;	.endef
__ZN7Helpers8ArrayADT4sizeEv:
LFB1458:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$20, %esp
	movl	%ecx, -20(%ebp)
	movl	$0, -4(%ebp)
L16:
	movl	-20(%ebp), %eax
	movl	4(%eax), %eax
	movl	(%eax), %eax
	cmpl	$790754882, %eax
	je	L15
	addl	$1, -4(%ebp)
	movl	-20(%ebp), %eax
	movl	4(%eax), %eax
	leal	4(%eax), %edx
	movl	-20(%ebp), %eax
	movl	%edx, 4(%eax)
	jmp	L16
L15:
	movl	-20(%ebp), %eax
	movl	4(%eax), %eax
	movl	-4(%ebp), %edx
	sall	$2, %edx
	negl	%edx
	addl	%eax, %edx
	movl	-20(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1458:
	.section	.text$_ZN7Helpers14createNewArrayEi,"x"
	.linkonce discard
	.globl	__ZN7Helpers14createNewArrayEi
	.def	__ZN7Helpers14createNewArrayEi;	.scl	2;	.type	32;	.endef
__ZN7Helpers14createNewArrayEi:
LFB1459:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	12(%ebp), %eax
	addl	$1, %eax
	cmpl	$536870911, %eax
	ja	L19
	sall	$2, %eax
	jmp	L22
L19:
	call	___cxa_throw_bad_array_new_length
L22:
	movl	%eax, (%esp)
	call	__Znaj
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	-12(%ebp), %eax
	addl	%edx, %eax
	movl	$790754882, (%eax)
	movl	$20, (%esp)
	call	__Znwj
	movl	%eax, %ebx
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	%ebx, %ecx
	call	__ZN7Helpers8ArrayADTC1EiPi
	subl	$8, %esp
	movl	%ebx, -16(%ebp)
	movl	8(%ebp), %eax
	movl	-16(%ebp), %edx
	movl	(%edx), %ecx
	movl	%ecx, (%eax)
	movl	4(%edx), %ecx
	movl	%ecx, 4(%eax)
	movl	8(%edx), %ecx
	movl	%ecx, 8(%eax)
	movl	12(%edx), %ecx
	movl	%ecx, 12(%eax)
	movl	16(%edx), %edx
	movl	%edx, 16(%eax)
	movl	8(%ebp), %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1459:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1460:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$52, %esp
	call	___main
	leal	-28(%ebp), %eax
	movl	$78, 4(%esp)
	movl	%eax, (%esp)
	call	__ZN7Helpers14createNewArrayEi
	leal	-28(%ebp), %eax
	movl	$11, 4(%esp)
	movl	$1, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	$22, 4(%esp)
	movl	$2, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	$33, 4(%esp)
	movl	$3, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	$44, 4(%esp)
	movl	$4, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	$55, 4(%esp)
	movl	$5, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	$90, 4(%esp)
	movl	$9, (%esp)
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT3putEii
	subl	$8, %esp
	leal	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT4sizeEv
	leal	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN7Helpers8ArrayADT4sizeEv
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1460:
	.globl	__ZTISt13runtime_error
	.section	.rdata$_ZTISt13runtime_error,"dr"
	.linkonce same_size
	.align 4
__ZTISt13runtime_error:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	__ZTSSt13runtime_error
	.long	__ZTISt9exception
	.globl	__ZTSSt13runtime_error
	.section	.rdata$_ZTSSt13runtime_error,"dr"
	.linkonce same_size
	.align 4
__ZTSSt13runtime_error:
	.ascii "St13runtime_error\0"
	.globl	__ZTISt9exception
	.section	.rdata$_ZTISt9exception,"dr"
	.linkonce same_size
	.align 4
__ZTISt9exception:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
	.long	__ZTSSt9exception
	.globl	__ZTSSt9exception
	.section	.rdata$_ZTSSt9exception,"dr"
	.linkonce same_size
	.align 4
__ZTSSt9exception:
	.ascii "St9exception\0"
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1893:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1893:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1892:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L28
	cmpl	$65535, 12(%ebp)
	jne	L28
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L28:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1892:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1894:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1894:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	___cxa_allocate_exception;	.scl	2;	.type	32;	.endef
	.def	__ZNSt13runtime_errorC1EPKc;	.scl	2;	.type	32;	.endef
	.def	__ZNSt13runtime_errorD1Ev;	.scl	2;	.type	32;	.endef
	.def	___cxa_throw;	.scl	2;	.type	32;	.endef
	.def	___cxa_free_exception;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	___cxa_begin_catch;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	___cxa_end_catch;	.scl	2;	.type	32;	.endef
	.def	___cxa_throw_bad_array_new_length;	.scl	2;	.type	32;	.endef
	.def	__Znaj;	.scl	2;	.type	32;	.endef
	.def	__Znwj;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
