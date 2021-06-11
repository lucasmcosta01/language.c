#include<stdio.h>
float temperatura(){
	float x, grau;
	scanf("%f", &x);
	grau = (x-32)/1.8;
	return grau;	
}

void main(){
	printf("Voce tem  %.2f celsios.\n", temperatura());	
}