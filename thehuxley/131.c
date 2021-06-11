#include<stdio.h>

int test(char* slco, int i, int qts){
	int h=0, b=0;
	int j;
	for(j = i; j<qts;j++){
		if(h==qts) return h;
		if(slco[j]=='b'|| slco[j]== 'w'){
			h++;	
		}else{
			break;
		}
		if(j==qts-1){
			j=-1;
		}
	}
	for(j = i-1; j>=0;j--){
		if(h==qts) return h;
		if(slco[j]=='r'|| slco[j]== 'w'){
			h++;	
		}else{
			return h;
		}
		if(j== 0)	j=qts-1;
	}
	
}
int test1(char* slco, int i, int qts){
	int h=0, b=0;
	int j;
	for(j = i; j<qts;j++){
		if(h==qts) return h;
		if(slco[j]=='r'|| slco[j]== 'w'){
			h++;
		}else{
			break;
		}
		if(j==qts-1){
			j=-1;
		}
	}
	for(j = i-1; j>=0;j--){
		if(h==qts) return h;
		if(slco[j]=='b'|| slco[j]== 'w'){
			h++;	
		}else{
			return h;
		}
		if(j== 0)	j=qts-1;
	}
	
}



void main(void){
	int qts;
	int i , j=0;
	scanf("%d", &qts);
	int h[qts], f[qts];
	char slco[qts];
	scanf(" %s", slco);
	for(i = 0; i<qts;i++){
		h[i] = test(slco, i, qts);
		f[i] = test1(slco, i, qts);	
		if(j<h[i])	j=h[i];
		if(j<f[i])	j=f[i];
	}
	
	
	printf("%d\n", j);		
}