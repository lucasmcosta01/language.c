#include<stdio.h>
void calcular_media (int *A, int *B){
	if(*A<*B){
		int aux = *A;
		*A = (*A+*B)/2;
		*B = (aux+*B)%2;	
	}else{
		int aux = *B;
		*B = (*A+*B)/2;
		*A = (*A+aux)%2;
	}	
}
void main(void){
	int A, B;
	scanf("%d %d", &A, &B);
	calcular_media (&A, &B);
	printf("A = %d\nB = %d", A, B);
}