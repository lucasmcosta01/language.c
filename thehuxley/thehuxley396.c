#include<stdio.h>
void main(){
	int fined_house=0, cars;
	float fine_collected=0;
	scanf("%d", &cars);
	while(cars != 999){
		if(cars>2){
			fine_collected+=(12.89*(cars-2));
			fined_house++;
		} 
		scanf("%d", &cars);	
	}
	printf("%.2f\n%d", fine_collected, fined_house);
	
}