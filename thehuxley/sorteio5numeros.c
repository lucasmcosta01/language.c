#include<stdio.h>
void main(){
	int first_number;
	scanf("%d", &first_number);
	int range=first_number, j, i, comparation;
	int a[5]={-1, -1, -1, -1, -1};
	int b[5];
	int numbers;
	scanf("%d", &comparation);
	for(scanf("%d", &numbers), j=4, i=0;i<range;i++){
		if(numbers%10==comparation){
		a[j]= numbers;
		j--;
		}
		scanf("%d", &numbers);	
	}
	for(i=4; i>=0; i--){
		for(j=0; j<5; j++){
			if(a[i]> a[j]){
			b[i]= a[i];
			
			}else {
			b[i]=a[j];
			a[j]=-1;
			}
		}
		a[i]=-1;
		printf("%d\n", b[i]);
	}	
}