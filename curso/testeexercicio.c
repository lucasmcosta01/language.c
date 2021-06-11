#include<stdio.h>
#include<string.h>
typedef struct{

  	char nome[10];

  	int idade;

  	float notas[3];

}Aluno;



int main() {

 	Aluno a;
 
 	Aluno *pa = &a;
	
	printf("Digite nome, idade e suas 3 notas:\n");
	
	scanf(" %s %d %f%f%f", (*pa).nome, &(*pa).idade, &(*pa).notas[0], &(*pa).notas[1], &(*pa).notas[2]);

	printf("\n%s, %d anos suas 3 notas foi %.2f %.2f %.2f.\n", (*pa).nome, (*pa).idade, (*pa).notas[0], (*pa).notas[1], (*pa).notas[2]);

  	return 0;
}