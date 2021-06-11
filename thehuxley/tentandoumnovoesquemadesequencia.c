#include<stdio.h>
void main(){
	int a, b, c, put;
	scanf("%d%d%d", &a, &b, &c);
	if(a>=b){
		put=a;
		a=b;
		b=put;
	}
	if(b>=c){
		put=b;
		b=c;
		c=put;
	}
	if(b<=a){
		put=b;
		b=a;
		a=put;
	}
	if(c<=a){
		put=c;
		c=a;
		a=put;
	}
	printf("%d %d %d", a, b, c);
		
}