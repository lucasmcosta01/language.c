#include<stdio.h>
#define TAM 10
int main()
{
	int a[TAM];
	int i;
	for (i=0; i < TAM ; i++){
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			a[i]= 1;
		}else{
			a[i]=-1;
		}
	}
	
	return 0;
}