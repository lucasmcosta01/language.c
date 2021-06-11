#include  <stdio.h>
int main() {
  	float crescent[10], temp;
 	int  i, j=0, k=0;
  	for ( i = 0; i < 10; i++) {
    	if(k==0){	
			scanf("%f", &crescent[i] );	
		}
			if(i==9 && k==0){
				i= 0;
				j= 1;
				k++;
			}
		if(k>=1 && k<=10){
			if (crescent[i] > crescent[j] && j<10 ) {
        		temp = crescent[i];
        		crescent[i] = crescent[j];
        		crescent[j]= temp;
        		i=-1;
        		k=0;
        		j=0;
			}
			k++;
			j++;
			if(i==9) i= 0;
		}
		if(k>10){
			printf(" %.f\n",crescent[i] );
  		}
	}
  return 0;
}