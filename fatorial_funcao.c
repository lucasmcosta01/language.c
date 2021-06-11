#include<stdio.h>
int fatorial(int entrada_usuario){
	int y=0;
	for(y=entrada_usuario-1;y>0; y--){
		entrada_usuario = entrada_usuario*y;
	}

	return entrada_usuario;	
}

void main(){
	int entrada_usuario;
	scanf("%d", &entrada_usuario);
	printf("%d", fatorial(entrada_usuario));	
}