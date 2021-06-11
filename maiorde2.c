#include<stdio.h>
int maior(int num1,int num2){
	
	return (num1 > num2) ? num1 : num2;
}
void main(){
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	printf("%d\n", maior(num1, num2));	
}