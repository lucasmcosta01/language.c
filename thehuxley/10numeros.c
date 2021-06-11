#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j=0, numero, verificador;
	scanf("%d", &verificador);
	while(verificador != -1){
		for(i=0;i<10; i++){
			scanf("%d", &numero);
			if(numero == verificador){
			    j++;
			}    
		}
		printf("%d appeared %d times\n", verificador, j);
		j=0;
		scanf("%d", &verificador);
	}
	return 0;
}
