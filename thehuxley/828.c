#include<stdio.h>

void main(void){
	float number_sal;
	float number_time;
	printf("Informe quanto ganha por hora:\n");
	scanf("%f", &number_sal);
	printf("Informe a quantidade mensal de trabalho:\n");
	scanf("%f", &number_time);
	printf("Resultadp: %.1f\n", number_sal*number_time);
	
	
}