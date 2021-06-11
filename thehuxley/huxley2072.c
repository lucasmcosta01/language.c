#include<stdio.h>
void main(){
	int day, i, right=0, rideup;
	char crossing;
	scanf("%d %c", &day);
	for(i=0; i<crossing;i++){
		printf("%c", &crossing);
		if(crossing == 'D' && i>0 && rideup ==0){
			right++;
		}else{
			rideup--;
		}
		if(crossing == 'C' && i>0 && right ==0){
			rideup++;
		}else{
			right--;
		}	
		
	}
	if(rideup < right)
	printf("%d", right-rideup);
	else
	printf("%d", rideup-right);
	
	
}