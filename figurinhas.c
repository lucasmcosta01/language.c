#include<stdio.h>
int main(){
	int qtd, i, j, joao=0,maria=0, somajoao=0, somamaria=0, bau=0;
	scanf("%d", &qtd);
	int figura[qtd];
	for(i=0; i<qtd; i++){
		scanf("%d", &figura[i]);
		if(figura[i]%2==0){
			joao++;
			somajoao = somajoao+figura[i];
		} else{
			maria++;
			somamaria = somamaria+figura[i];		
		}	
	}
	for(i=0; i<qtd; i++){
		for(j=i+1;j<qtd; j++){
			if(figura[i]==figura[j]){
				bau	= figura[j];
				figura[j] =0;
			}else{
				bau = 0;
			}
			if(bau%2==0){
				somajoao = somajoao-bau;
			}
			if(bau%2!=0){
				somamaria = somamaria-bau;
			}		
		}
	}
	if(somajoao>somamaria){
		printf("%d\n%d\n%d\n", joao, maria, somajoao);
	}else{
		printf("%d\n%d\n%d\n", joao, maria, somamaria);
	}
	return 0;
}