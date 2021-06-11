#include<stdio.h>
int main(){
	int i, j, tamanho;
	printf("Digite o tamanho do triangulo:\n");
	scanf("%d", &tamanho);
	for(i=1; i<=tamanho; i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=tamanho-1;i>0;i--){
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;	
}