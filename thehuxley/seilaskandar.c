#include<stdio.h>
#include<stdlib.h>
void main(void){
	int i;
int* numbers = (int*)malloc(6 * sizeof(int));

	for(i = 0; i<6;numbers++, i++){
	 scanf("%d", &numbers);
	}
	for(i = 0; i<6;i++){
	 printf("%d", numbers[i]);
	}
}
