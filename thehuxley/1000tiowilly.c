#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j=0, numero[1000], verificador;
	while(1){
		scanf("%d", &numero[0]);
		if(numero[0] == -1){
			return 0;
		}
		for(i=1;i<1000; i++){
			scanf("%d", &numero[i]);
		}
		scanf("%d", &verificador);
		for(i=0; i<1000; i++){
			if(verificador == numero[i]){
				j++;
			}
		}
		printf("%d appeared %d times\n", verificador, j);
		j=0;
	}
}
