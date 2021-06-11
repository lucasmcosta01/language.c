#include<stdio.h>
int main(){
	int  dia, i, saldo, menorValor;
	scanf("%d", &dia);
	scanf("%d", &saldo);
	int conta[dia];
	for(i=0;i<dia;i++){
		scanf("%d", &conta[i]);
		if(i==0){
		   menorValor = saldo+(conta[i]);
		}
		if(saldo+(conta[i])<=menorValor){
		   menorValor = saldo+(conta[i]);
		}
	    saldo = saldo+(conta[i]);
	}
	printf("%d", menorValor);	
		
	return 0;	
}