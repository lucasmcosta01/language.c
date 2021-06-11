#include<stdio.h>
void main(){
	float height, weight;
	int imc;
	printf("Digite a massa em kg e altura em m:\n");
	scanf("%f%f", &weight, &height);
	imc = weight/(height*height);
	printf("IMC: %d\n", imc);
	
}