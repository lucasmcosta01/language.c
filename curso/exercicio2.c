#include<stdio.h>
#include<string.h>
typedef struct{
	char nome[30];
	char cpf[12];
}banco;

typedef struct{
	int numero_conta;
	float saldo;
	banco dados;
	
}conta;

int main(void){
	int i, j=1;
	int verificar_conta;
	float saque, deposito;
	conta cliente[3];
	banco cadastro[3];
	while(j==1){
		printf("1 - Para primeiro cadastro.\n");
		printf("2 - Para saque ou deposito.\n");
		scanf("%d", &j);
		if(j == 1){
			for(i=0; i<3; i++){
				printf("Abertura de conta.\n\n");
				printf("Por favor digite seu nome e cpf:\n\n");
				scanf(" %[^\n] %s", cadastro[i].nome, cadastro[i].cpf);
				printf("Sr.%s, para ativar sua conta precisa realizar o primeiro deposito.\n", cadastro[i].nome);
				printf("Digite o valor a ser depositado:");
				scanf("%f", &cliente[i].saldo);
				cliente[i].numero_conta = i+1;
				
			}
		}else{
			printf("1 - Para saque.\n");
			printf("2 - Para deposito.\n");
			scanf("%d", &j);
			if(j==1){
				for(i=0; i<3; i++){
					printf("Digite o numero da conta:\n");
					scanf("%d", &verificar_conta);
					if(verificar_conta == i+1){
						printf("Digite o valor a ser sacado:\n");
						scanf("%f", &saque);
						cliente[i].saldo -= saque;
						printf("Senhor(a)%s, seu saldo atual e R$%f.\n\n", cadastro[i].nome, cliente[i].saldo);
						break;
					}
					
				}
			}else{
				for(i=0; i<3; i++){
					printf("Digite o numero da conta:\n");
					scanf("%d", &verificar_conta);
					if(verificar_conta == i+1){
						printf("Digite o valor a ser depositado:\n");
						scanf("%f", &deposito);
						cliente[i].saldo += deposito;
						printf("Senhor(a)%s, seu saldo atual e R$%f.\n\n", cliente[i].dados.nome, cliente[i].saldo);
						break;
					}
				
				}
			}
		}
		
		printf("1 - Para realizar uma nova transacao.\n");
		printf("2 - Para sair.\n");
		scanf("%d", &j);
		if(j==1){
			j=1;
		}else{
			return 0;
		}
	}
}
	
	
	
	
	
