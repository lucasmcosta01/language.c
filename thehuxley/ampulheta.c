#include<stdio.h>
int ampulheta(int altura, int quantidade){
	int i, j;
	for(i=1; i<=altura; i++){
		printf("*");
		if(i==1){
			printf("*");
			for(j=0;j<altura-1;j++){
				printf(" *");
			}
			printf("*\n\n");
		}
		for(j=0; j<altura*2-1; j++){
			if(j==i || j==altura*2-i){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("*\n\n");
	}	
	
	
	
	
	
}



void main(){
	int i, tri, j;
	scanf("%d", tri);
	int altura[tri], quantidade[tri];
	for(i=0; i)
	
	
	
	
	
	
	
	
	
}