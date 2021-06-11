#include<stdio.h>

void main(void){
	char str[500];
	int i, j;
	gets(str);
	for(i = 0, j = 0; i<500; i++){
		if(str[i] == 0){
			break;	
		}
		if((str[i] == 65)||(str[i] == 69)||(str[i] == 73)||(str[i] == 79)||(str[i] == 85)||
		(str[i] == 97)||(str[i] == 101)||(str[i] == 105)||(str[i] == 111)||(str[i] == 117)){
			j++;
		}
	}
	printf("%d", j);
}