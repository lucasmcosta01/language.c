#include<stdio.h>

void main(){
	int in[15];
	int impar[5];
	int par[5]; 
	int i;
	int j= 0, l=0;
	for( i = 0; i<15;i++){
		scanf("%d", &in[i]);
		
	}
	for(i=0;i<15;i++){
		if(in[i]%2==0){
			par[j]=in[i];
			j++;
		}
		else if (in[i]%2!=0){
			impar[l]=in[i];
			l++;
		}
		if(j==5){
			for(int a = 0; a<j;a++){
				printf("par[%d] = %d\n", a, par[a]);
				par[a]= 0;
			}
			j=0;	
		}
		if(l==5){
			for(int a = 0; a<l;a++){
				printf("impar[%d] = %d\n", a, impar[a]);
				impar[a]= 0;
			}
			l=0;	
		}		
		if(i==14){
			for(int a = 0; a<l;a++){
				printf("impar[%d] = %d\n", a, impar[a]);	
			}
			for(int a = 0; a<j;a++){
				printf("par[%d] = %d\n", a, par[a]);
			}
			
		}
	}
}
	
	