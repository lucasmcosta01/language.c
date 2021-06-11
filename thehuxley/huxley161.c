#include<stdio.h>
#include<string.h>
#include<ctype.h>

void palind(char x[]){
	int j = 0, h = 0;
	int cont = strlen(x);
	char aux[255]={0};
	char aux1[255]={0};
	for(int i = 0; i<cont; i++){
		if(x[i] != ' ')	{
			aux[j]= tolower(x[i]);
			j++;
		}else if(x[i]==' '){
			h++;
		}
		
	}
	for(int i = cont-1-h, j = 0; i>= 0; i--, j++){
		aux1[j]= aux[i];
		
	}
	if(strcmp(aux, aux1)==0){
		printf("SIM\n");
	}else{
		printf("NAO\n");
	}
	
}
void main(void){
	int cont;
	char palindromo[255];
	scanf("%d", &cont);
	for(int i = 0; i<cont; i++){
		scanf(" %[^\n]s", palindromo);
		palind(palindromo);
		
	}
			
}