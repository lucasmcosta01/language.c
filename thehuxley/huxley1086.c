#include<stdio.h>
void main(){
	float km;
	int day;
	scanf("%d%f", &day, &km);
	printf("%.2f", ((day*30)+(km*0.01)) - ((day*30)+(km*0.01))*0.1 );
	
}