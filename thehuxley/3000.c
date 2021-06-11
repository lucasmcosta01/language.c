#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	char name[30];
	char age[4];
}eleven;

void main(void){
	int range;
	char comp[4];
	int j = 0;
	scanf("%d", &range);
	eleven* friend = (eleven*)malloc(range * sizeof(eleven));
	for(int i = 0; i<range; i++){
		scanf(" %s %s", friend[i].name, friend[i].age);
	}
	scanf(" %s", comp);
	for(int i = 0; i<range; i++){
		if(strcmp(friend[i].age, comp)==0){
			printf("%s ", friend[i].name);
			j++;
		}		
	}
	if(j==0)
		printf("Eleven nao tem amigos com essa idade.");
	
}