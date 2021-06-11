#include<stdio.h>
int soma(){
	int a, b;
	scanf("%d%d", &a, &b);
	return a+b;	
}

void main(){
	printf("%d", soma());	
}