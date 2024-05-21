	.file	"BankSystem.c"
	.globl	start
	.bss
	.align 8
start:
	.space 8
	.globl	end
	.align 8
end:
	.space 8
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "cls\0"
	.align 8
.LC1:
	.ascii "                            Welcome to IMT Bank System\0"
	.align 8
.LC2:
	.ascii "which Operation do you want to do ?\0"
.LC3:
	.ascii "1 - > Admin Window \0"
.LC4:
	.ascii "2 - > Client Window \0"
.LC5:
	.ascii " %c\0"
.LC6:
	.ascii "Enter UserName : \0"
.LC7:
	.ascii "%19s\0"
	.align 8
.LC8:
	.ascii "Wrong User Name Please Try Again \0"
.LC9:
	.ascii "Enter Password : \0"
.LC10:
	.ascii "%hu\0"
	.align 8
.LC11:
	.ascii "Wrong password please try again :\0"
.LC12:
	.ascii "Welcome Mahmoud\0"
	.align 8
.LC13:
	.ascii "          Welcome to Admin Window \0"
	.align 8
.LC14:
	.ascii "Which Operation do you want to do ?\0"
.LC15:
	.ascii "Chose 1 to create new account\0"
	.align 8
.LC16:
	.ascii "Choose 2 to open existing account\0"
.LC17:
	.ascii "Choose 3 to exit system\0"
	.align 8
.LC18:
	.ascii "Enter Your Gaurdian National Id : \0"
.LC19:
	.ascii "%I64d\0"
.LC20:
	.ascii "Enter Accout Bank ID : \0"
.LC21:
	.ascii "Welcome to client window :) \0"
.LC22:
	.ascii "Enter Bank Account ID : \0"
	.align 8
.LC23:
	.ascii "Wrong Account Id Please Try Again \0"
.LC24:
	.ascii "Welcome Mr %s \12\0"
	.align 8
.LC25:
	.ascii "Sry this operation are not supported\0"
	.align 8
.LC26:
	.ascii "Do You want to Do Another operation ? y | n\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$192, %rsp
	.seh_stackalloc	192
	.seh_endprologue
	call	__main
	movb	$110, -65(%rbp)
	movabsq	$28276619108442445, %rax
	movq	%rax, -96(%rbp)
	movq	$0, -88(%rbp)
	movl	$0, -80(%rbp)
	movl	$1234, -24(%rbp)
.L31:
	leaq	.LC0(%rip), %rcx
	call	system
	leaq	.LC1(%rip), %rcx
	call	puts
	movb	$100, -97(%rbp)
	leaq	.LC2(%rip), %rcx
	call	puts
	leaq	.LC3(%rip), %rcx
	call	puts
	leaq	.LC4(%rip), %rcx
	call	puts
	leaq	-97(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rcx
	call	scanf
	movzbl	-97(%rbp), %eax
	cmpb	$49, %al
	jne	.L2
	movw	$0, -130(%rbp)
	movb	$48, -1(%rbp)
	movb	$49, -25(%rbp)
	movb	$48, -131(%rbp)
.L5:
	leaq	.LC6(%rip), %rcx
	call	puts
	leaq	-128(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC7(%rip), %rcx
	call	scanf
	leaq	-96(%rbp), %rdx
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	strcmp
	testl	%eax, %eax
	je	.L3
	leaq	.LC8(%rip), %rcx
	call	puts
	movb	$49, -1(%rbp)
	jmp	.L4
.L3:
	movb	$48, -1(%rbp)
.L4:
	cmpb	$49, -1(%rbp)
	je	.L5
.L9:
	leaq	.LC9(%rip), %rcx
	call	printf
	leaq	-130(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rcx
	call	scanf
	movzwl	-130(%rbp), %eax
	cwtl
	cmpl	-24(%rbp), %eax
	je	.L6
	leaq	.LC11(%rip), %rcx
	call	puts
	movb	$49, -25(%rbp)
	jmp	.L33
.L6:
	movb	$48, -25(%rbp)
	leaq	.LC12(%rip), %rcx
	call	puts
	jmp	.L8
.L33:
	cmpb	$49, -25(%rbp)
	je	.L9
.L8:
	movb	$49, -2(%rbp)
.L20:
	leaq	.LC13(%rip), %rcx
	call	puts
	leaq	.LC14(%rip), %rcx
	call	puts
	leaq	.LC15(%rip), %rcx
	call	puts
	leaq	.LC16(%rip), %rcx
	call	puts
	leaq	.LC17(%rip), %rcx
	call	puts
	leaq	-131(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rcx
	call	scanf
	movzbl	-131(%rbp), %eax
	cmpb	$49, %al
	jne	.L10
	call	create_Node
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rcx
	call	EnterUserName
	movq	-40(%rbp), %rax
	addq	$30, %rax
	movq	%rax, %rcx
	call	EnterUserAddress
	movq	-40(%rbp), %rax
	addq	$80, %rax
	movq	%rax, %rcx
	call	EnterUserNationalId
	movq	-40(%rbp), %rax
	addq	$72, %rax
	movq	%rax, %rcx
	call	EnterUserAge
	movq	-40(%rbp), %rax
	movzwl	72(%rax), %eax
	cmpw	$20, %ax
	ja	.L11
	leaq	.LC18(%rip), %rcx
	call	puts
	movq	-40(%rbp), %rax
	addq	$88, %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	jmp	.L12
.L11:
	movq	-40(%rbp), %rax
	movq	$0, 80(%rax)
.L12:
	call	Generate_UserAccountId
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 96(%rax)
	call	Generate_UserPassword
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 112(%rax)
	movq	-40(%rbp), %rax
	addq	$104, %rax
	movq	%rax, %rcx
	call	Enter_Balance
	movq	-40(%rbp), %rax
	movw	$49, 106(%rax)
	movq	start(%rip), %rax
	testq	%rax, %rax
	jne	.L13
	movq	-40(%rbp), %rax
	movq	%rax, start(%rip)
	movq	-40(%rbp), %rax
	movq	$0, 120(%rax)
	movq	-40(%rbp), %rax
	movq	%rax, end(%rip)
	jmp	.L17
.L13:
	movq	start(%rip), %rax
	movq	%rax, -16(%rbp)
	jmp	.L15
.L16:
	movq	-16(%rbp), %rax
	movq	120(%rax), %rax
	movq	%rax, -16(%rbp)
.L15:
	movq	-16(%rbp), %rax
	movq	120(%rax), %rax
	testq	%rax, %rax
	jne	.L16
	movq	-40(%rbp), %rax
	movq	$0, 120(%rax)
	movq	-16(%rbp), %rax
	movq	-40(%rbp), %rdx
	movq	%rdx, 120(%rax)
	jmp	.L17
.L10:
	movzbl	-131(%rbp), %eax
	cmpb	$50, %al
	jne	.L17
	leaq	.LC20(%rip), %rcx
	call	puts
	leaq	-144(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	movq	start(%rip), %rdx
	movq	-144(%rbp), %rax
	movq	%rax, %rcx
	call	Search_Exist_Account
	testq	%rax, %rax
	je	.L17
	movq	start(%rip), %rdx
	movq	-144(%rbp), %rax
	movq	%rax, %rcx
	call	Search_Exist_Account
	movq	%rax, -48(%rbp)
	movq	start(%rip), %rdx
	movq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	choose_from_System_features
	movb	%al, -2(%rbp)
.L17:
	cmpb	$48, -2(%rbp)
	je	.L20
	jmp	.L21
.L2:
	movzbl	-97(%rbp), %eax
	cmpb	$50, %al
	jne	.L22
	movb	$49, -49(%rbp)
.L30:
	leaq	.LC21(%rip), %rcx
	call	puts
	movb	$48, -17(%rbp)
.L25:
	leaq	.LC22(%rip), %rcx
	call	puts
	leaq	-152(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	movq	start(%rip), %rdx
	movq	-152(%rbp), %rax
	movq	%rax, %rcx
	call	Search_Exist_Account
	testq	%rax, %rax
	je	.L23
	movb	$48, -17(%rbp)
	jmp	.L24
.L23:
	leaq	.LC23(%rip), %rcx
	call	puts
	movb	$49, -17(%rbp)
.L24:
	cmpb	$49, -17(%rbp)
	je	.L25
	movq	start(%rip), %rdx
	movq	-152(%rbp), %rax
	movq	%rax, %rcx
	call	Search_Exist_Account
	movq	%rax, -64(%rbp)
.L29:
	leaq	.LC9(%rip), %rcx
	call	printf
	leaq	-160(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	movq	-64(%rbp), %rax
	movq	112(%rax), %rdx
	movq	-160(%rbp), %rax
	cmpq	%rax, %rdx
	je	.L26
	leaq	.LC11(%rip), %rcx
	call	puts
	movb	$49, -17(%rbp)
	jmp	.L34
.L26:
	movb	$48, -17(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC24(%rip), %rcx
	call	printf
	jmp	.L28
.L34:
	cmpb	$49, -17(%rbp)
	je	.L29
.L28:
	movq	start(%rip), %rdx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	choose_from_System_features
	movb	%al, -49(%rbp)
	cmpb	$48, -49(%rbp)
	je	.L30
	jmp	.L21
.L22:
	leaq	.LC25(%rip), %rcx
	call	puts
.L21:
	leaq	.LC26(%rip), %rcx
	call	puts
	leaq	-65(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC5(%rip), %rcx
	call	scanf
	movzbl	-65(%rbp), %eax
	cmpb	$121, %al
	je	.L31
	movl	$0, %eax
	addq	$192, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-W64 project) 6.2.0"
	.def	system;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	strcmp;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	create_Node;	.scl	2;	.type	32;	.endef
	.def	EnterUserName;	.scl	2;	.type	32;	.endef
	.def	EnterUserAddress;	.scl	2;	.type	32;	.endef
	.def	EnterUserNationalId;	.scl	2;	.type	32;	.endef
	.def	EnterUserAge;	.scl	2;	.type	32;	.endef
	.def	Generate_UserAccountId;	.scl	2;	.type	32;	.endef
	.def	Generate_UserPassword;	.scl	2;	.type	32;	.endef
	.def	Enter_Balance;	.scl	2;	.type	32;	.endef
	.def	Search_Exist_Account;	.scl	2;	.type	32;	.endef
	.def	choose_from_System_features;	.scl	2;	.type	32;	.endef
