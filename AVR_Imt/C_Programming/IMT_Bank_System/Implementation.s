	.file	"Implementation.c"
	.section .rdata,"dr"
.LC0:
	.ascii "Enter your Full Name : \0"
.LC1:
	.ascii "%s\0"
	.text
	.globl	EnterUserName
	.def	EnterUserName;	.scl	2;	.type	32;	.endef
	.seh_proc	EnterUserName
EnterUserName:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC0(%rip), %rcx
	call	printf
	movq	16(%rbp), %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "Enter your Address : \0"
	.text
	.globl	EnterUserAddress
	.def	EnterUserAddress;	.scl	2;	.type	32;	.endef
	.seh_proc	EnterUserAddress
EnterUserAddress:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC2(%rip), %rcx
	call	printf
	movq	16(%rbp), %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC3:
	.ascii "Enter Your National Id : \0"
.LC4:
	.ascii "%I64d\0"
	.align 8
.LC5:
	.ascii "Enter number consist of 14 digit please \12 \0"
.LC6:
	.ascii "National Id : \0"
	.text
	.globl	EnterUserNationalId
	.def	EnterUserNationalId;	.scl	2;	.type	32;	.endef
	.seh_proc	EnterUserNationalId
EnterUserNationalId:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC3(%rip), %rcx
	call	printf
.L5:
	movq	16(%rbp), %rdx
	leaq	.LC4(%rip), %rcx
	call	scanf
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movabsq	$9999999999999, %rax
	cmpq	%rax, %rdx
	ja	.L4
	leaq	.LC5(%rip), %rcx
	call	printf
	leaq	.LC6(%rip), %rcx
	call	printf
.L4:
	movq	16(%rbp), %rax
	movq	(%rax), %rdx
	movabsq	$9999999999999, %rax
	cmpq	%rax, %rdx
	jbe	.L5
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC7:
	.ascii "Enter Your Age : \0"
.LC8:
	.ascii "%hu\0"
	.text
	.globl	EnterUserAge
	.def	EnterUserAge;	.scl	2;	.type	32;	.endef
	.seh_proc	EnterUserAge
EnterUserAge:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC7(%rip), %rcx
	call	printf
	movq	16(%rbp), %rdx
	leaq	.LC8(%rip), %rcx
	call	scanf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC9:
	.ascii "Your Account ID : %I64d \12\0"
	.text
	.globl	Generate_UserAccountId
	.def	Generate_UserAccountId;	.scl	2;	.type	32;	.endef
	.seh_proc	Generate_UserAccountId
Generate_UserAccountId:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$100000000, -4(%rbp)
	movl	$999999999, -8(%rbp)
	movl	$0, %ecx
	call	time
	movl	%eax, %ecx
	call	srand
	call	rand
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	subl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cltq
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rcx
	call	printf
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC10:
	.ascii "Your Account Password : %I64d \12\0"
	.text
	.globl	Generate_UserPassword
	.def	Generate_UserPassword;	.scl	2;	.type	32;	.endef
	.seh_proc	Generate_UserPassword
Generate_UserPassword:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$100000000, -4(%rbp)
	movl	$999999999, -8(%rbp)
	movl	$0, %ecx
	call	time
	movl	%eax, %ecx
	call	srand
	call	rand
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	subl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	cltq
	movq	%rax, -16(%rbp)
	addq	$100509, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rcx
	call	printf
	movq	-16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC11:
	.ascii "Enter The Balance :\0"
	.text
	.globl	Enter_Balance
	.def	Enter_Balance;	.scl	2;	.type	32;	.endef
	.seh_proc	Enter_Balance
Enter_Balance:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC11(%rip), %rcx
	call	puts
	movq	16(%rbp), %rdx
	leaq	.LC8(%rip), %rcx
	call	scanf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	create_Node
	.def	create_Node;	.scl	2;	.type	32;	.endef
	.seh_proc	create_Node
create_Node:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	$128, %ecx
	call	malloc
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC12:
	.ascii "There is no accounts in database\12 \0"
	.text
	.globl	Search_Exist_Account
	.def	Search_Exist_Account;	.scl	2;	.type	32;	.endef
	.seh_proc	Search_Exist_Account
Search_Exist_Account:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	cmpq	$0, 24(%rbp)
	jne	.L15
	leaq	.LC12(%rip), %rcx
	call	printf
	movl	$0, %eax
	jmp	.L16
.L15:
	movq	24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L17
.L18:
	movq	-8(%rbp), %rax
	movq	120(%rax), %rax
	movq	%rax, -8(%rbp)
.L17:
	movq	-8(%rbp), %rax
	movq	96(%rax), %rax
	cmpq	16(%rbp), %rax
	jne	.L18
	movq	-8(%rbp), %rax
.L16:
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC13:
	.ascii "Enter the account id you want to make transiciton to :\0"
.LC14:
	.ascii "Send money :\0"
	.align 8
.LC15:
	.ascii "Sry you dont have enough Balance in your account \0"
	.text
	.globl	Make_Transaction
	.def	Make_Transaction;	.scl	2;	.type	32;	.endef
	.seh_proc	Make_Transaction
Make_Transaction:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movw	$0, -18(%rbp)
	leaq	.LC13(%rip), %rcx
	call	puts
	leaq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC4(%rip), %rcx
	call	scanf
	movq	-16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rax, %rcx
	call	Search_Exist_Account
	movq	%rax, -8(%rbp)
	leaq	.LC14(%rip), %rcx
	call	puts
	leaq	-18(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rcx
	call	scanf
	movq	16(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-18(%rbp), %eax
	cmpw	%ax, %dx
	jnb	.L20
	leaq	.LC15(%rip), %rcx
	call	puts
	jmp	.L22
.L20:
	movq	-8(%rbp), %rax
	movzwl	106(%rax), %eax
	cmpw	$49, %ax
	jne	.L22
	movq	16(%rbp), %rax
	movzwl	106(%rax), %eax
	cmpw	$49, %ax
	jne	.L22
	movq	-8(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-18(%rbp), %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 104(%rax)
	movq	16(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-18(%rbp), %eax
	subl	%eax, %edx
	movq	16(%rbp), %rax
	movw	%dx, 104(%rax)
.L22:
	nop
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC16:
	.ascii "Enter 1 to    Set Account to Active State \0"
	.align 8
.LC17:
	.ascii "Enter 2 to    Set Account to Restricted State \0"
	.align 8
.LC18:
	.ascii "Enter 3 to    Set Account to Closed \0"
.LC19:
	.ascii " %c\0"
	.align 8
.LC20:
	.ascii "Account status changed to Active\0"
	.align 8
.LC21:
	.ascii "Account status changed to Restricted\0"
	.align 8
.LC22:
	.ascii "Account status changed to Closed\0"
.LC23:
	.ascii "Invalid Option\0"
	.text
	.globl	changeAccountStatus
	.def	changeAccountStatus;	.scl	2;	.type	32;	.endef
	.seh_proc	changeAccountStatus
changeAccountStatus:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movb	$48, -1(%rbp)
	leaq	.LC16(%rip), %rcx
	call	puts
	leaq	.LC17(%rip), %rcx
	call	puts
	leaq	.LC18(%rip), %rcx
	call	puts
	leaq	-1(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	movzbl	-1(%rbp), %eax
	cmpb	$49, %al
	jne	.L24
	movq	16(%rbp), %rax
	movw	$49, 106(%rax)
	leaq	.LC20(%rip), %rcx
	call	puts
	jmp	.L28
.L24:
	movzbl	-1(%rbp), %eax
	cmpb	$50, %al
	jne	.L26
	movq	16(%rbp), %rax
	movw	$48, 106(%rax)
	leaq	.LC21(%rip), %rcx
	call	puts
	jmp	.L28
.L26:
	movzbl	-1(%rbp), %eax
	cmpb	$51, %al
	jne	.L27
	movq	16(%rbp), %rax
	movw	$50, 106(%rax)
	leaq	.LC22(%rip), %rcx
	call	puts
	jmp	.L28
.L27:
	leaq	.LC23(%rip), %rcx
	call	puts
.L28:
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC24:
	.ascii "Enter amount of money : \0"
	.align 8
.LC25:
	.ascii "Invalid ,Your bank account can not effort this much \0"
.LC26:
	.ascii "Done\0"
	.text
	.globl	get_cash
	.def	get_cash;	.scl	2;	.type	32;	.endef
	.seh_proc	get_cash
get_cash:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movw	$0, -2(%rbp)
	leaq	.LC24(%rip), %rcx
	call	puts
	leaq	-2(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rcx
	call	scanf
	movq	16(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-2(%rbp), %eax
	cmpw	%ax, %dx
	jnb	.L30
	leaq	.LC25(%rip), %rcx
	call	puts
	jmp	.L32
.L30:
	movq	16(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-2(%rbp), %eax
	subl	%eax, %edx
	movq	16(%rbp), %rax
	movw	%dx, 104(%rax)
	leaq	.LC26(%rip), %rcx
	call	puts
.L32:
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC27:
	.ascii "Enter money : \0"
.LC28:
	.ascii "Done :) \0"
	.text
	.globl	Deposit_in_Account
	.def	Deposit_in_Account;	.scl	2;	.type	32;	.endef
	.seh_proc	Deposit_in_Account
Deposit_in_Account:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC27(%rip), %rcx
	call	puts
	leaq	-2(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rcx
	call	scanf
	movq	16(%rbp), %rax
	movzwl	104(%rax), %edx
	movzwl	-2(%rbp), %eax
	addl	%eax, %edx
	movq	16(%rbp), %rax
	movw	%dx, 104(%rax)
	leaq	.LC28(%rip), %rcx
	call	puts
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC29:
	.ascii "Choose 1 to make Transaction \0"
	.align 8
.LC30:
	.ascii "choose 2 to change account statues \0"
.LC31:
	.ascii "choose 3 to get cash \0"
	.align 8
.LC32:
	.ascii "choose 4 to Deposit in Account \0"
	.align 8
.LC33:
	.ascii "choose 5 return to main menu  \0"
	.align 8
.LC34:
	.ascii "SryYour Account is not Active \0"
	.align 8
.LC35:
	.ascii "You can not perform any operations\0"
	.text
	.globl	choose_from_System_features
	.def	choose_from_System_features;	.scl	2;	.type	32;	.endef
	.seh_proc	choose_from_System_features
choose_from_System_features:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movb	$48, -2(%rbp)
	movb	$49, -1(%rbp)
	leaq	.LC29(%rip), %rcx
	call	puts
	leaq	.LC30(%rip), %rcx
	call	puts
	leaq	.LC31(%rip), %rcx
	call	puts
	leaq	.LC32(%rip), %rcx
	call	puts
	leaq	.LC33(%rip), %rcx
	call	puts
	leaq	-2(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC19(%rip), %rcx
	call	scanf
	movzbl	-2(%rbp), %eax
	cmpb	$49, %al
	jne	.L35
	movq	16(%rbp), %rax
	movzwl	106(%rax), %eax
	cmpw	$49, %ax
	jne	.L35
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	Make_Transaction
	jmp	.L36
.L35:
	movzbl	-2(%rbp), %eax
	cmpb	$50, %al
	jne	.L37
	movq	16(%rbp), %rcx
	call	changeAccountStatus
	jmp	.L36
.L37:
	movzbl	-2(%rbp), %eax
	cmpb	$51, %al
	jne	.L38
	movq	16(%rbp), %rax
	movzwl	106(%rax), %eax
	cmpw	$49, %ax
	jne	.L38
	movq	16(%rbp), %rcx
	call	get_cash
	jmp	.L36
.L38:
	movzbl	-2(%rbp), %eax
	cmpb	$52, %al
	jne	.L39
	movq	16(%rbp), %rax
	movzwl	106(%rax), %eax
	cmpw	$49, %ax
	jne	.L39
	movq	16(%rbp), %rcx
	call	Deposit_in_Account
	jmp	.L36
.L39:
	movzbl	-2(%rbp), %eax
	cmpb	$53, %al
	jne	.L40
	movb	$48, -1(%rbp)
	jmp	.L36
.L40:
	leaq	.LC34(%rip), %rcx
	call	puts
	leaq	.LC35(%rip), %rcx
	call	printf
.L36:
	movzbl	-1(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-W64 project) 6.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	time;	.scl	2;	.type	32;	.endef
	.def	srand;	.scl	2;	.type	32;	.endef
	.def	rand;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	malloc;	.scl	2;	.type	32;	.endef
