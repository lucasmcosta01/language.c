#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void separar_string(char permuta[], int h){
	int j = strlen(permuta);
	int aux[j];
	int i, k, trade = 0;
	for(i = 0; i<j;i++){
		aux[i]= permuta[i]-48;
	}
	
	for(i=0;i<j;i++){
		for(k=0;k<j;k++){
			if(aux[i]>=aux[k]){
				trade=aux[i];
				aux[i]=aux[k];
				aux[k]=trade;
			}	
		}
	}
	printf("Caso %d: ",h+1);
	for(i=0; i<j;i++){
		printf("%d",aux[i]);
	}
	printf("\n");	
}

void main(void){
	int qts;
	char permuta[100]; 
	scanf("%d", &qts);
	for(int i = 0; i<qts;i++){
		scanf(" %s", permuta);
		separar_string(permuta, i);		
	}
		
}