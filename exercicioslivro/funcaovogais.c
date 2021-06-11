#include<stdio.h>
int vogais(char vog[], int tam){
	int i, j=0;
	for(i=0; i<tam; i++){
		if(vog[i] == 'a' || vog[i]== 'e' || vog[i]== 'i' || vog[i]== 'o' || vog[i]== 'u'){
			j++;
		}		
	}
	return j;	
}
void main(){
	int i, tam;
	scanf("%d", &tam);
	char vog[tam];
	for(i=0; i<tam; i++){
		scanf(" %c", &vog[i]);
	}
	printf("%d", vogais(vog, tam));
}