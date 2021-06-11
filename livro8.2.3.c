#include<stdio.h>
int trianguloIso(int triangulo){
	int i, j, k;
	for(i=1;i<=triangulo; i++){
		for(j=0;j<i; j++){
			for(k=0; k<=triangulo){
			
			}	
		}
		printf("\n");		
	}
	return 0;
}

int main(){
	int triangulo;
	scanf("%d", &triangulo);
	trianguloIso(triangulo);
	return 0;
}