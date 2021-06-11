#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nome[30];
	char cpf[12];
	char sexo[12];
	int idade;	
}client;

void main(void){
	client* usuario = (client*)malloc(1*sizeof(client));
	for(int i = 0;i<1;i++){
		printf("Digite seu nome:\n");
		scanf(" %s", usuario[i].nome);
		printf("Sr %s digite seu cpf, sexo e idade:\n", usuario[i].nome);
		scanf(" %s", usuario[i].cpf);
		scanf(" %s", usuario[i].sexo);
		scanf("%d", &usuario[i].idade);
	}
	
	for(int i = 0; i<1;i++){
		printf("Nome: %s\nCpf: %s\nSexo: %s\nIdade: %d\n", *usuario[i]);
			
	}
	
	
}