#include<stdio.h>
int vogais(char vog[], int tam){
	int i, j=0;
	for(i=tam-1; i>=0; i--){
		printf("%c ", vog[i]);
		
	}
}
void main(){
	int i, tam;
	scanf("%d", &tam);
	char vog[tam];
	for(i=0; i<tam; i++){
		scanf(" %c", &vog[i]);
	}
	vogais(vog, tam);
}