#include<stdio.h>

void main(void){
	char str[500];
	char str1;
	int i, j;
	gets(str);
	scanf("%c", &str1);
	for(i = 0, j = 0; i<500; i++){
		if(str[i] == 0){
			break;	
		}
		if(str[i] == str1){
			j++;
		}
		
	}
	printf("%d", j);
}