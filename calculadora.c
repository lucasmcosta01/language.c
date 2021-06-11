#include<stdio.h>
int main(){
	int i;	
	char asmd;
	float calculadora[5000], resultado;
	scanf("%f", &calculadora[0]);
	scanf("%f", &calculadora[1]);
	scanf(" %c", &asmd);
	if(asmd == '+'){
		resultado = calculadora[0]+calculadora[1];
	}else if(asmd == '-' && calculadora[1]<0){
		resultado = calculadora[0]+calculadora[1];
	}else if (asmd == '-' && calculadora[1]>=0){
		resultado = calculadora[0]-calculadora[1];
	}else if(asmd == '*'){
		resultado = calculadora[0]*calculadora[1];
	}else if(asmd == '/' && calculadora[1]!= 0){
		resultado = calculadora[0]/calculadora[1];
	}else{
		printf("operacao nao pode ser realizada\n");
		
	}
	
	
	
	
	
	
	for(i=2; i<5000; i++){
		printf("%.3f\n", resultado);
		scanf("%f", &calculadora[i]);
		scanf(" %c", &asmd);	
		if(asmd == '&'){
			break;
		}
		if(calculadora[i]<0){
			printf("operacao nao pode ser realizada\n");
		}else if(asmd == '+'){
			resultado = resultado+calculadora[i];
		}else if(asmd == '-' && calculadora[i]<0){
			resultado = resultado + calculadora[i];
		}else if (asmd == '-' && calculadora[i]>=0){
			resultado = resultado - calculadora[i];
		}else if(asmd == '*'){
			resultado = resultado*calculadora[i];
		}else if(asmd == '/' && calculadora[i] != 0){
			resultado = resultado/calculadora[i];
		}else if(asmd == '0' || calculadora[i == 0]){
			printf("operacao nao pode ser realizada\n");
			break;
		}
	}
	return 0;		
}