#include<stdio.h>
#include<string.h>

void main(){
	char str[500];
	scanf(" %[^\n]", str);
	printf("%d", strlen(str));
}