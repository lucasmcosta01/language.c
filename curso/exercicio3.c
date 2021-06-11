#include<stdio.h>
#include<string.h>

typedef struct{
	char nome[40];
	char telefone[15];
	
}Contato;

int main(void){
	int i, j, k, h;
	Contato lista[40];
	char verificador_nome[40];
	printf("\nLista Telefonica\n\n");
	while(1){
		printf("\n1 - Inserir um contato.\n");
		printf("2 - Visualizar todos os contatos.\n");
	    printf("3 - Alterar nome ou numero do contato.\n");
		printf("4 - Sair.\n");
		scanf("%d", &k);
		if(k==1){
			for(;i<40;){
				printf("Digite seu nome e telefone:\n");
				scanf(" %s %s", lista[i].nome, &lista[i].telefone);
				i++;
				break;
			}
		}else if(k==3){
			printf("\nDigite seu nome para alterar os dados:\n");
			scanf(" %s", verificador_nome);
			for(j=0; j<i; j++){
				if(strcmp(verificador_nome, lista[j].nome)==0){
					printf("1 - para autalizar o nome.\n");
					printf("2 - para autalizar o telefone.\n");
					if(scanf("%d", &h)==1){
						printf("Digite o nome:\n");
						scanf(" %s", lista[j].nome);
					}else{
						printf("Digite seu telefone:\n");
						scanf("%s", lista[j].telefone);
					}
				}
			}
			
			
			
		}else if(k==2){
			for(j=0; j<i; j++){
				printf("%s, %s.\n", lista[j].nome, lista[j].telefone);
			}			
			
		}else{
			return 0;
		}
	}
}