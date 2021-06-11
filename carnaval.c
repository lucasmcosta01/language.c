#include<stdio.h>
int main(){
	int i;
	float nota[5];
	float menorNota=0, maiorNota=0, somador=0;
	for(i=0;i<5;i++){
		scanf("%f", &nota[i]);
		if(i==0){
		menorNota = nota[0];
		maiorNota = nota[0];
		}
		if(menorNota> nota[i]){
			menorNota = nota[i];
		}
		if(maiorNota<nota[i]){
			maiorNota = nota[i];
		}
		somador = somador+nota[i];
	}
	printf("%.1f",somador-maiorNota-menorNota);	
	return 0;
}