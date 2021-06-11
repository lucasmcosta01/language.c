#include<stdio.h>
int main(){
	int i, number1, number2;
	scanf("%d%d", &number1, &number2);
	for(i=number1; i<=number2; i++){
		if(i%2==0)
		printf("%d  " , i);
	}
	return 0;
}