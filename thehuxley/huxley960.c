#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>



typedef struct{
	char registration[15];
	char student[15];
	char note[15];
	char aluno[50];
}school;


int main(void){
	setlocale(LC_ALL, "Portuguese_Brasil");
	int ver, a; 
	scanf("%d", &ver);
	float average=0;
	school* school_list = (school*)malloc(ver * sizeof(school));
	for(int i = 0; i < ver; i++){
		scanf(" %[^\n]s", school_list[i].aluno);
		a = strlen(school_list[i].aluno);
		for(int j = 0; j < a; j++){
			if(school_list[j].aluno[j]-45 == 0 ){
				strcat(school_list[j].note, school_list[i].aluno[j]);
			}else if(j < a/2){
				strcpy(school_list[j].note, school_list[j].registration);
			}else{
				strcpy(school_list[j].note, school_list[j].student);
			}
		}
		float* test = school_list[i].note;
		printf("%f" , test);
	}
	average /= ver;
	printf("Alunos abaixo da media:\n");
	for(int i = 0; i < ver; i++){
		if(average > test){
			printf("Matricula: %s Nome: %s Nota: %.1f\n", school_list[i].registration, school_list[i].student, &school_list[i].note);
		}		
	}
	
	printf("Alunos iguais ou acima da media:\n");
	
	for(int i = 0; i < ver; i++){
		if(average <= test){
			printf("Matricula: %s Nome: %s Nota: %.1f\n", school_list[i].registration, school_list[i].student, &school_list[i].note);
		}		
	}
	printf("Media = %.1f\n", average);
	return 0;
}