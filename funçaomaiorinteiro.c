#include<stdio.h>
int maior(){
	int number1, number2;
	scanf("%d%d", &number1, &number2);
	if(number1 > number2){
		return number1;
	}else{
		return number2;	
	}
}
void main(){
	printf("%d", maior());	
}