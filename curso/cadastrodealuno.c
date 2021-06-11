#include<stdio.h>
#include<stdlib.h>
typedef struct

{

    char nome[30];

    float media;

    int faltas;

}Aluno;

int main(void){
	int numero_alunos;
	printf("Quantos alunos sera cadastrado?\n");
	scanf("%d",&numero_alunos);
	
	Aluno* alunos = (Aluno*)malloc(numero_alunos * sizeof(Aluno));
	for(int i=0; i<numero_alunos;i++){
		printf("Digite o nome:\n");
		scanf(" %s", alunos[i].nome);
		printf("Digite a media:\n");
		scanf(" %f", &alunos[i].media);
		printf("Digite a quantidade de faltas:\n\n");
		scanf(" %d", &alunos[i].faltas);
		printf("Cadastro concluido com sucesso.\n\n");
		
	}
	for(int i=0; i<numero_alunos;i++){
	
		printf("Nome: %s\nMedia: %.2f\nFaltas: %d\n\n", alunos[i].nome, alunos[i].media, alunos[i].faltas);	
	}
	free(alunos);
	return 0;	
}