#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* uppercase(char food[]){

	for(int i = 0; i<10; i++){
		food[i] = toupper(food[i]);
	}
	return food;
}
void main(void){
	float price = 0;
 	char food[10];
	char drink[10];

	
	scanf(" %s %s", food, drink);
	strcpy(food, uppercase(food));
	strcpy(drink, uppercase(drink));
	if(strcmp(food, "LASANHA")==0){
		price += 8; 		
	}else{
		price+= 11;
	}
	if(strcmp(drink, "SUCO")==0){
		price += 2.5; 		
	}else{
		price+= 3;
	}
	printf("%.2f", price);
}

