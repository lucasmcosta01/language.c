#include<stdio.h>
#include<string.h>

typedef struct{
	int number;
	char name[20];
	char broken[10];
	int wishes;
}candidate;

int main(void){
	int checker;
	candidate political[5];
	
	for(int i=0; i<5;i++){
		scanf("%d", &political[i].number);
		scanf(" %s", political[i].name);
		scanf(" %s", political[i].broken);
		
		political[i].wishes = 0;	
	}
	while(1){
		scanf("%d", &checker);
		for(int i = 0; i<5; i++){
			if(checker == political[i].number ){
				political[i].wishes += 1;
			}	
		}
		if(checker == 0 ) break;	
	}
	for(int i = 0; i<5; i++){
		printf("%s %d %s: %d\n",  political[i].broken, political[i].number, political[i].name, political[i].wishes);
			
	}
	return 0;	
}





