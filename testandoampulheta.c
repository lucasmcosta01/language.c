#include<stdio.h>
#include<conio.h>
#define N 15

int main(void)
{
   char A[N][N]; int i, j;
   for(i=0;i<N;i++)
    for(j=0;j<N;j++)
    {
        A[i][j]=' ';
    }
   for(i=0;i<N;i++)
   {
    for(j=0;j<N;j++)
    {
        if((j>=i) && (i<N-j))
        A[i][j]='*';
        if((i>=j+1) && (i<N-j))
        A[i][j]=' ';
        if((i>=j) && (j>N-i-2))
        A[i][j]='*';
    }
    }
   for(i=0;i<N;i++)
   {
    for(j=0;j<N;j++)
    {
        printf("%c",A[i][j]);
    }
    printf("\n");
   }

}