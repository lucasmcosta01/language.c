#include<stdio.h>
float maior(){
	float number1, number2;
	scanf("%f%f", &number1, &number2);
	if(number1 > number2){
		return number1*2;
	}else{
		return number2*2;	
	}
}
void main(){
	printf("%.2f", maior());	
}