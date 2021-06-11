#include<stdio.h>
#define TAM 10
int main()
{
	int a[TAM];
	int i;
	for (i=0; i < TAM ; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=TAM-1; i >=0 ; i--)
	{
	
		if (a[i]%2==0)
		{
		 	printf("%d ", a[i]);
		}
	}
	return 0;
}