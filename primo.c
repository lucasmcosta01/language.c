#include <stdio.h>
int priminho(int numero){
	int i=1, j=0;
	while(i<=numero){
		if(numero%i==0){
			j++;
		}
		i++;
	}
	if(j==2){
		printf("1\n");	
	}else{
		printf("0\n");	
	}
}
int main() {
    int numero;
    scanf("%d", &numero);
    while(numero!=-1){
    	priminho(numero);
		scanf("%d", &numero);		
    }
	return 0;
}