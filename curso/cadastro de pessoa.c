#include<stdio.h>
#include<string.h>



typedef struct{
	char nome[30];
	float altura;
	float peso;
	char cpf[12];
	char sexo[10];
		
}Pessoa;


int main(void){
	char verifica_cpf[12];
	Pessoa cadastro[5];
	int i;
	for(i=0; i<5; i++){
	printf("Digite seu nome:\n");
	scanf(" %s", cadastro[i].nome); 
	printf("\nSenhor(a) %s, por favor digite sua altura, peso, sexo e o cpf:\n", cadastro[i].nome);
	scanf("%f %f %s %s", &cadastro[i].altura, &cadastro[i].peso, cadastro[i].sexo, cadastro[i].cpf);		
	}
	printf("Digite seu cpf:\n");
	for(scanf(" %s", verifica_cpf),i=0; i<5;i++){
		
		if(strcmp(verifica_cpf, cadastro[i].cpf)==0){
			
			printf("%s, seu IMC e %.f.\n", cadastro[i].nome, cadastro[i].peso/(cadastro[i].altura*cadastro[i].altura) );
				
		}else{
			
			printf("\nCPF inexistente.\n", cadastro[i].nome);
		}
	}
	return 0;	
}
