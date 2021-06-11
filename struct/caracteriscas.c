#include<stdio.h>

typedef struct{
	char sexo;
	char corOlho;
	char cabelo;
	int idade;
}pessoa;
void main(void){
	pessoa people[100];
	int maiorIdade=0;
	int i =0;
	float loira=0;
	for(i = 0;i<100;i++){
		scanf("%d", &people[i].idade);
		if(people[i].idade== -1){
			break;
		}
		scanf(" %c %c %c", &people[i].sexo, &people[i].cabelo,&people[i].corOlho);
		if(people[i].idade>=maiorIdade){
			maiorIdade=people[i].idade;
		}
		if(people[i].sexo == 'f' 
		&& people[i].idade>=18 
		&& people[i].idade<=35 
		&& people[i].corOlho=='v'
		&& people[i].cabelo=='l'){
			loira++;	
		}
	}
	printf("Mais velho: %d\n", maiorIdade);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%\n", loira*100/i);
	
}
