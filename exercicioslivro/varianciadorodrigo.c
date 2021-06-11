#include<stdio.h>
#include<math.h>
float media(float n[], int tam){
	int i;
	float soma = 0;
	for (i=0; i< tam ; ++i){
		soma += n[i];
	}
	return soma/tam;
}
	
float variancia(float n[], int tam){
	int i;
	float var = 0;
	float m = media(n,tam);         	
	for (i=0; i< tam ; ++i){         	
		var += (n[i] - m)*(n[i] - m);
	}
	return var/tam;
}
	
	
	
float standard_deviation(float n[], int tam){
	return 	sqrt(variancia(n, tam));
}
	
void main(){
	int i, tam;
	scanf("%d", &tam);
	float n[tam];
	for(i=0;i<tam;i++){
		scanf("%f", &n[i]);	
	}
	media(n, tam);
	printf("%.2f", standard_deviation(n, tam) );
		
}