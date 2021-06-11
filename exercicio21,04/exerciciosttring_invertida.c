#include<stdio.h>

void main(void){
	char str[500];
	int i;
	gets(str);
	for(i = 0; i<500; i++){
		if(str[i] == 0){
			break;	
		}	
	}
	for(i-=1; i>=0; i--){
		printf("%c", str[i]);	
	}
}