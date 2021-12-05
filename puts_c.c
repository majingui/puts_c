void puts_c(char *string){
	long long int i = 0;
	while(string[i]!= 0 ){
		i++;
	}
	asm (
			"movq $0,%%rdi  \n\t"
			"movq %0,%%rsi  \n\t"
			"movq %1,%%rdx  \n\t"
			"movq $1,%%rax  \n\t"
			"syscall"
			::"g"(&string[0]),"r"(i)
			:"%rdi","%rsi","%rdx","%rax"
	);
}
