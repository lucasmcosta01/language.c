#include<stdio.h>
void main(){
	int i = 0, y=0, range = 5, entrada_usuario, soma=0, soma_total=0;
	for(i=0; i<range;i++){
		scanf("%d", &entrada_usuario);
		if(entrada_usuario%3==0){
			for(y=entrada_usuario-1;y>0; y--){
				entrada_usuario = entrada_usuario*y;
			}
			soma_total = soma_total+entrada_usuario;	
		}
	}
	printf("%d", soma_total);	
}