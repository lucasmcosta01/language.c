#include<stdio.h>
void main(){
	int range[3], i, j, k=0, trade;
	scanf("%d%d%d", &range[0], &range[1], &range[2]);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(range[i]<=range[j]){
				trade=range[i];
				range[i]=range[j];
				range[j]=trade;
			}	
		}
	}
	printf("%d\n%d\n%d\n", range[0], range[1], range[2]);	
}
