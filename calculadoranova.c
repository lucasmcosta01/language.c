#include<stdio.h
int main(){
	char operador;
	int j=1, i;
	float nume1=0, nume2=0;
	for (i=0; i<j; i++){
		if(i==0){
			scanf("%f", &nume1);	
		}
		scanf("%f", &nume2);
		scanf(" %c", &operador);
		if(operador == '&'){
			break;
		}else if(operador == '+'){
			nume1 = nume1+nume2;
		
			printf("%.3f\n", nume1);
		}else if(operador == '-'){
			nume1 = nume1-nume2;
		
			printf("%.3f\n", nume1);
		}else if(operador == '*'){
			nume1 = nume1*nume2;
		
			printf("%.3f\n", nume1);
		}else if(operador == '/' && nume2!= 0){
			nume1 = nume1/nume2;
			
			printf("%.3f\n", nume1);
		}else{
			printf("operacao nao pode ser realizada\n");
		
		}
		j++;		
	}
		
	return 0;	
}