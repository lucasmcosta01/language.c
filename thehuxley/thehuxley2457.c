


#include<stdio.h>
void main(){
	int i, j, range;
	scanf("%d", &range);
	int number[range];
	for(i=1;i<=range; i++){
		for(j=1;j<=i; j++){
			printf("%d", j);
			i==j ? printf("\n") : printf(" ");
		}
	}	
}


