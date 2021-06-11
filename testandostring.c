#include<stdio.h>
int main(){
	char nome[3];
	int comp;
	scanf(" %c", &nome[0]);
	scanf(" %c", &nome[1]);
	scanf(" %c", &nome[2]);
	comp  = strcmp(nome[0], nome[1]);
	if(comp ==0){
		printf("%c %c",nome[0], nome[1]); 
	}
	printf(" %c%c%c", nome[0],nome[1],nome[2]);
	return 0;
	
}