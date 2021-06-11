#include<stdio.h>
int main(){
	int inicial, final, i, seguraai;
	scanf("%d%d", &inicial,&final);
	if(inicial>final){
	seguraai = inicial;
	inicial = final;
	final = seguraai;	
	}
	for(i=inicial;i<final; i++){
		if(i%5==3 ||i%5==2){
			printf("%d\n", i);
		}
	}
	return 0;	
}