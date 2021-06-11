#include<stdio.h>
int main(){
	int numero=0;
	while(numero != -1){
		scanf("%d", &numero);
		if(numero!= -1){
			if(numero/numero==1 && numero%2!=0 && numero%3!=0){
				printf("1\n");
			}else if(numero == 2 || numero == 3) {
				printf("1\n");
			}else{
				printf("0\n");
			} 
		}	
	}
	return 0;
}