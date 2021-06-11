#include<stdio.h>
#define TAM 10
void main()
{
	float a[TAM], hold;
	int i, j;
	for (i=0; i < TAM ; i++)
	{
	 	scanf("%f", &a[i]);
	}
	for (i=0; i <TAM ; i++){
		for(j=0; j<TAM; j++){
			if(a[i]<=a[j]){
			 	hold = a[i];
				a[i] = a[j];
				a[j] = hold;
			}
		}	
	}
	for(i=0;i<TAM; i++){
		printf("%.2f ", a[i]);	
	}
}
