#include<stdio.h>
#include<string.h>

typedef struct{
	char name[10];
	float notas[4];
}alunos;

void main(void){
	alunos aluno[5];
	for(int i = 0; i<5;i++){
		printf("Digite o nome:\n");
		scanf(" %s", aluno[i].name);
		for(int j = 0; j<4; j++){
			printf("%s digite a %d nota :\n", aluno[i].name, j+1);
			scanf("%f", &aluno[i].notas[j]);	
		}
	}
	for(int i = 0; i<5;i++){
		printf("%s:", aluno[i].name);
		for(int j = 0; j<4; j++){
			printf("%.2f ", aluno[i].notas[j]);
		}
		printf("\n");
	}
}