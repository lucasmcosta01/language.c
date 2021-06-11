#include<stdio.h>
void par(int n[], int tam){
	int i;
	for(i=0; i<tam; i++){
		if(n[i]%2==0){
			printf("%d ", n[i]);
		}
	}
}
void main(){
	int i, tam;
	scanf("%d", &tam);
	int number[tam];
	for(i=0; i<tam; i++){
		scanf("%d", &number[i]);
	}
	par(number, tam);
	
}