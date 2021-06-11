#include<stdio.h>

void main(void){
	float notas[5][4];
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			scanf("%f", &notas[i][j]);	
		}
	}
	for(int j = 0; j<4; i++){
		for(int i = 0; i<5; j++){
			printf("%.2f ", notas[i][j]);	
		}
		printf("\n");
	}
	
}