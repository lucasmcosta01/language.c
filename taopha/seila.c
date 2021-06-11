#include<stdio.h>
#include<stdlib.h>
int tam(int arr[]){
  return sizeof arr/sizeof arr[0];
}



void main(){
	int array[200];
	
	printf("%d", tam(array));
}