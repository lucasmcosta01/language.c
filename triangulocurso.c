#include<stdio.h>
void main(){
	int i, j, tamanho;
	scanf("%d", &tamanho);
	
	for(i=1; i<=tamanho; i++){
		for(j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=tamanho; i>0; i--){
		for(j=i; j>1; j--){
			printf("*");
		}
		printf("\n");
	}
}

	
	
	
	
	
	
	
