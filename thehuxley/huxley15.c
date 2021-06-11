#include<stdio.h>
#include<string.h>

void main(void){
	char welcome[50];
	fgets(welcome, 50, stdin);
	printf("Seja muito bem-vindo Maria %s\n", welcome);
	
}