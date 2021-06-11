#include<stdio.h>

void main(void){
	char str[500];
	int i, j;
	gets(str);
	for(i = 0; i<500; i++){
		if(str[i] == 0){
			break;	
		}	
	}
	char str1[i];
	for(i-=1, j = 0; i>=0; i--, j++){
		str1[j]	= str[i];
	}
	printf("%s", str1);
}