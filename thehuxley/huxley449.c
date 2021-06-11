#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* to_upper_case(char n[]){
	int i;
	for(i=0; i<13; i++){
		n[i] = toupper(n[i]);
	}
	
	return n;
}
int main(){
	float price = 0;
    int i=0, j=0;
	char food[13], drink[13];
	scanf(" %s", food);
	scanf(" %s", drink);
	
	
	
	food = to_upper_case(&food);
	drink = to_upper_case(&drink);
	
	
	i = strcmp(food, "LASANHA");
	j = strcmp(drink, "REFRIGERANTE");
	if(i == 0){
		price += 8.00;
	}else{
		price += 11.00;
	}
	if(j == 0){
		price += 3.00;
	}else{
		price += 2.50;
	}
	printf("%.2f", price);
	return 0;
}