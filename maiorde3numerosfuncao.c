#include<stdio.h>
int maior(int number1, int number2, int number3){
	if(number1 >= number2 && number1 >= number3){
		return number1;
	}
	else if(number2 >= number1 && number2 >= number3){
		return number2;
	}else{
		return number3;
	}
}
void main(){
	int number1, number2, number3;
	while(1==1){
	
		scanf("%d%d%d", &number1, &number2, &number3);
		printf("%d", maior(number1, number2, number3));	
	}
}