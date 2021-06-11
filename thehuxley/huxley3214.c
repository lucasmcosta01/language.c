#include<stdio.h>
void main(){
	int second, day=0, hours=0, minutes=0,seconds=0 ;
	scanf("%d", &second);
	while(second!=0){
	
		if(second >= 86400){
			day+= 1;
			second-=86400;	
		}else if(second >=3600){
			hours+= 1;
			second-=3600;
		}else if (second >= 60){
			minutes+= 1;
			second-=60;
		}else{
			seconds+= second;
			second-=seconds;
		}
	}
	printf("%d\n%d\n%d\n%d\n", day, hours, minutes, seconds);
	
}