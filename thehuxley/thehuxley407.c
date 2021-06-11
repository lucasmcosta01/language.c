#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void cicle_maior(int number1, int number2){
    int i, j, contador=1, maior=0, put;
    if(number2<number1){
    	put=number1;
		number1=number2;
		number2=put;	 	
	}
	for(i=number1;i<=number2;i++){
   		for(j=i;j!=1;){
			j = j%2==0 ? j/2 : j*3+1;
			contador++;	
		}
		maior = contador> maior ? contador : maior;
		contador = 1;
    }
    printf("%d %d %d\n",  number1, number2, maior);
}

void main(){
	int a, b, i, y=1;
	while(scanf("%d%d",  &a, &b)>0){
		cicle_maior(a, b);
	}

}