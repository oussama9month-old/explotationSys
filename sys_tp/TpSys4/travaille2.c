#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
	printf("saisir un caractere ");
	char x = fgetc(stdin);
	printf("x = %c\n", x);
	return 0;
}
