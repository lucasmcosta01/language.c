#include<stdio.h>
int main(){
	int i, number1, number2;
	if(number1<number2){
	
		i=number1+1;
		while(i<number2){
			printf("%d ", i);
			i++;	
		}
	}else{
			i=number2+1;
		while(i<number1){
			printf("%d ", i);
			i++;			
	}
	return 0;
}