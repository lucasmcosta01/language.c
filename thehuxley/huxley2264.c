#include<stdio.h>
void main(){
	int range;
	scanf("%d", &range);
	int matriz[range][range];
	int i, j;
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d", &matriz[i][j]);
		}
		
	}
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			if(matriz[i][j] ==0 && matriz[i][j+1]==0 && matriz[i][j-1]==0 && matriz[i+1][j]==0 && matriz[i-1][j]==0) {
				printf("%d\n", i+j);
			}else if(matriz[i][j] ==0 && matriz[i][j+1]==0 && matriz[i][j-1]==0){
				printf("%d\n", i+j);	
			}else if(matriz[i][j] ==0 && matriz[i+1][j]==0 && matriz[i-1][j]==0){
				printf("%d\n", i+j);	
			}
		}
		
	}
		
}