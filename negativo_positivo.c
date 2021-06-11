#include<stdio.h>
#include<conio.h>
int negativo_positivo(){
	int numero;
	scanf("%d", &numero);
	if(numero < 0){	
		return 1;
	}else {
		return 0;
	}
}
void main(){
	negativo_positivo()	== 1 ? printf("Verdadeiro") : printf("Falso");
	
}