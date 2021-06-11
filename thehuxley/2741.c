#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	char name[20];
}str;

int main(void){
	char ver[10];
	int i = 0;
	int verificador2 = 1;
	str* pointer = (str*)malloc(10 * sizeof(str));

    while(1){
    	verificador2 = scanf(" %s", ver);
    	if(verificador2 != 1){
    		break;
		}
    			
    	int verificador = strcmp(ver, "IMPRIMIR");
    	int verificador1 = strcmp(ver, "INSERIR");
    	if(verificador == 0){
    		printf("Atualmente trabalhando:\n");
    				
    		for(int j = 0; j < i; j++){
    			if(strcmp(pointer[j].name, "")!=0){
    				printf("%s\n", pointer[j].name);
    			}
    		}
    	}else if(verificador1 == 0){
    				
    		scanf(" %s", pointer[i].name);
    		i++;
    	}else{
    				
    		scanf(" %s", pointer[i].name);
    		for(int j = 0;j<10; j++){
    			if(strcmp(pointer[i].name, pointer[j].name)==0){
    				strcpy(pointer[i].name, "");
    				strcpy(pointer[j].name, "");
    			}
    		}	
    	}
    		
   	}

	return 0;
}	
