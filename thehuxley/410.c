#include<stdio.h>
#include<stdlib.h>

void main(void){
	int range;
	int i, j;
	int major=0;
	int minor=500;
	int ver = 0;
	scanf("%d", &range);
	int * numbers = (int*)malloc(range*sizeof(int));
	for(i=0; i<range;i++){
		scanf("%d", &numbers[i]);	
	}
	for(i = 0, j = range-1; i<=j;i++){
		if(numbers[i] < minor){
			minor = numbers[i];
			j--;
		}
		if(numbers[j] > major ){
			major = numbers[j];
		}		
	}
	ver = major - minor;
	int  major1 = 0;
	int  minor1 = 500;
	for(i = 0, j = range-1; i<=j;i++, j--){
			if(numbers[j] >major1) major1 = numbers[j];
			if(numbers[i]<minor1) minor1 = numbers[i];
	}
	if(ver< (major1-minor1)){
		ver = major1-minor1;
	}
	printf("%d", ver);
	
}