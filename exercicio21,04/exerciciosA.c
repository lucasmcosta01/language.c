#include<stdio.h>
void main(void){
	int quadrado[5][5] = {0};
	int tabela[5][6] = {{1, 2, 3, 4, 5},
	{2, 4, 6, 8, 10},
	{20, 10, 5, 3, 1},
	{3, 6, 9, 12, 15} };
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(j==i){
				scanf("%d ", &quadrado[i][j]);
			}
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ", quadrado[i][j]);
		}
		printf("\n");
	}
	
}
