#include<stdio.h>
#define TAM 10
int main()
{
	float a[TAM];
	int i;
	for (i=0; i < TAM ; i++)
	{
		scanf("%f",&a[i]);
	}
	for (i=0; i <TAM ; i++)
	{
		if (i%2==0)
		{
		 	printf("%f ", a[i]);
		}
	}
	return 0;
}