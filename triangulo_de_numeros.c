#include<stdio.h>
void main(){
	int i, j, range;
	scanf("%d", &range);
	for(i=1; i<=range; i++){
		for(j=0; j<i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
		
}