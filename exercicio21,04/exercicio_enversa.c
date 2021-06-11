#include<stdio.h>

void main(void){
	float notas[5][4];
	for(int i = 0; i<5; i++){
		for(int j = 0; j<4; j++){
			scanf("%f", &notas[i][j]);	
		}
	}
	for(int i = 4; i>=0; i--){
		for(int j = 3; j>=0; j--){
			printf("%.2f ", notas[i][j]);	
		}
		printf("\n");
	}
	
}