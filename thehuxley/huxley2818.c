#include<stdio.h>
void main(){
	float pH;
	printf("Digite o pH da solucao:\n");
	scanf("%f", &pH);
	if(pH == 7) printf("Neutra\n");
	if(pH<7 && pH>=0) printf("Acida\n");
	if(pH>7 && pH<=14) printf("Basica\n");
	
}