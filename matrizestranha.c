#include<stdio.h>

void main(void){
	int matriz[3][3];
	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3; j++){
			scanf("%d", &matriz[j][i]);
		}
	}
	printf("Essa e a matriz normal.\n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3; j++){
		 printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Essa e a matriz transposta.\n");
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3; j++){
		 printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}
	
}