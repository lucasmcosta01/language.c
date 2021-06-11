#include<stdio.h>

int sum(int numberOne[], int i, int total){
	total+= numberOne[i];
	if(i == -1 ){
		return total;		
	}else{
		return sum(numberOne, i-1, total);	
	}	
}

int main(void){
	int number1[]= {1,2,3,4,5,6,7,8,9,10};
	int i = sizeof(number1)/4;
	int total = 0;
	printf("A resposta deve ser: %d", sum(number1, i-1, total));	
}