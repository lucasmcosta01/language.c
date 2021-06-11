#include<stdio.h>
int sei_la(int number){
	int dif=0, minu, sub, i, j;
	for(i=3, j=1, minu=1, sub=0; number!=dif; i+=2, j+=2){
		dif = minu - sub;
		if(number== dif){
			printf("%d - %d\n", minu, sub);
			return 0;
		}
		minu+=i;
		sub+=j;			
	}
}

void main(){
	int number;
	scanf("%d", &number);
	while(number>0){
		sei_la(number);	
		scanf("%d", &number);
	}
}