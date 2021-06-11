#include<stdio.h>
int trianguloIso(int triangulo){
	int i, j, k, contador;
	scanf("%d", &triangulo);
	triangulo = triangulo*2;
	contador = triangulo;	
	for(i=1;i<=triangulo; i= i+2){
		for(k=0; k<contador; k++){
			printf(" ");
		}
		for(j=0;j<i; j++){
			printf("*");				
		}
		printf("\n");
		contador--;		
	}
	return 0;
}

int main(){
	int triangulo;
	trianguloIso(triangulo);
	return 0;
}