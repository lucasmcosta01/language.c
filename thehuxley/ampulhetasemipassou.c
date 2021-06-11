#include<stdio.h>
int ampulheta(int altura, int quantidade){
	int i, j, contador;
	contador = quantidade;
	for(i=1; i<altura; i++){
		printf("*");
		if(i==1){
			printf("*");
			for(j=0;j<altura-1;j++){
				printf(" *");
			}
			printf("*\n*");
		}
		for(j=1; j<altura*2; j++){
			if(j==i+1 || j==altura*2-i-1 ){
				printf("*");
			}else if (j>i && j<altura*2-i && altura-2-quantidade >= altura-i-1){
				printf(".");
			}else {
				printf(" ");
			}
		}
		contador++;
		printf("*\n");
	}	

    for(i=1; i<=altura; i++){
		printf("*");
		if(i==altura){
			printf("*");
			for(j=0;j<altura-1;j++){
				printf(" *");
			}
			printf("*\n");
          	break;
		}
		for(j=1; j<altura*2; j++){
			if(j==altura-i+1 || j==altura+i-1){
				printf("*");
			}else if(j>altura-i+1 && j<altura+i-1 && quantidade>= altura-i ){
				printf(".");
			}else{
				printf(" ");
			}
		}
	    printf("*\n");
	}	
	return 0;	
}
int main(){
	int quantidade, altura, volume, i;
	scanf("%d", &quantidade);
	for(i=0;i<quantidade; i++){
		scanf("%d%d", &altura, &volume);
		printf("Caso %d:\n", i+1);
		ampulheta(altura, volume);		
	}
	
 return 0; 
}