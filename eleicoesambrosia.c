#include <stdio.h>
int votos(){
	int i, k, alibaba=0, alcapone=0, branco=0, nulos=0, digito;
	k=100000000;
	scanf("%d", &digito); 
	for(i=0;digito!=-1&&i<k; i++){
		if(digito == 83){
			alibaba++;
		} else if(digito == 93){
			alcapone++;
		} else if(digito == 0){
			branco++;	
		} else{
			nulos++;
		}
		scanf("%d", &digito);
	}
		
	printf("%d\n%d\n%d\n%d\n", alibaba, alcapone, branco, nulos);
	
	if(alibaba>alcapone){
		printf("83\n");
	} else {
		printf("93\n");
	}

	float totalVotos = alibaba+alcapone+branco;
	
	printf("%.2f\n%.2f\n", (alibaba*100)/totalVotos, (alcapone*100)/totalVotos);
	return 0;
}

int main(){
	votos();
	return 0;
}



















