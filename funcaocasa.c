#include<stdio.h>
 void parede(int altura){
   	int i; 
	for(i=0; i< altura; ++i){
	    printf("%c", '*');
	}
   		printf("\n");
}
// -------------------------------------------
void casa(int casas){
	parede(casas-1);
	parede(casas-1);
	parede(casas-1);
	parede(casas);
	parede(casas);
	parede(casas-1);
	parede(casas-1);	
	parede(casas-1);
}
void main(){
	int altura_casa;
	for(;1==1;){
	scanf("%d", &altura_casa);	
	casa(altura_casa);	
	}
}