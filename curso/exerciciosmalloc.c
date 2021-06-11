#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main(){
	float* nota = (float*)malloc(10 * sizeof(float));
	nota[0] = 0;
	for(int i = 0; i<10; i++){
		printf("Digite a %d nota:\n", i+1);
		scanf("%f", &nota[i]);
		nota[0] += nota[i];
		
	}
	printf("A media das suas notas foi %.2f", nota[0]/=10);
	free(nota);
	return 0;	
}