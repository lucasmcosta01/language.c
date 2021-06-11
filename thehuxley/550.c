#include<stdio.h>

int verificar_maior(int vetor[]){
	int a=0;
	for(int i = 0; i<10;i++){
		if(a<vetor[i]){
			a = vetor[i];
		}
	}
	return a;
}


void main(void){
	int x[10];
	int y[10];
	int z[10];
	int i, A, B, C;
	int j = 0;
	while(scanf("%d %d %d %d %d %d",&A,&B,&C,&x[0],&y[0],&z[0])!= EOF){
		
		for(i =1; i<10;i++){
			y[i] = (y[i - 1] * A + B)%C;
			x[i] = (x[i - 1] * B + C)%A;
			z[i] = (z[i - 1] * C + A)%B;
		}
		int soma = verificar_maior(x) + verificar_maior(y) + verificar_maior(z);
		soma = soma%((A/B)+C);
		printf("%d\n", soma);
		soma = 0;
		j++;
	}
}