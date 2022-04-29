#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define Max 10 //Número de structs em cada lista

struct faxineiro{
	char cpf[11];
	char rg[10];
	char nome[30];
	char sexo[1];
	char datNasc[8];
	char telefones[5][15]; //Matriz 5 telefones com 15 numeros cada (no máximo)
};

struct cliente{
	char cpf[11];
	char nome[30];
	char datNasc[8];
	char endereco[50];
	char cep[8];
	char cidade[20];
	char emails[5][50]; //Matriz 5 emails com 50 caracteres cada (no máximo) 
	char telefones[5][15]; //Matriz 5 telefones com 15 numeros cada (no máximo) 
};

struct servico{
	char cpfFaxineiro[11];
	char cpfCliente[11];
	char dataServico[8];
	char valor[10];
};

int menuPrincipal(){
	int casePrincipal;
	printf("Submenu de Faxineiros............1\n");
	printf("Submenu de Clientes..............2\n");
	printf("Submenu de Serviços..............3\n");
	printf("Submenu de Relatórios............4\n");
	printf("Sair.............................5\n\n");
	printf("Digite sua opção ==========> ");
	scanf("%d", &casePrincipal);
	switch(casePrincipal){ //switch case que dá acesso a todos os submenus
		case 1: printf("\nO que você deseja fazer no menu: Faxineiros\n\n");
		opcoesMenu();
		opcoesFaxineiro();
		break;
		
		case 2: printf("\nO que você deseja fazer no menu: Clientes\n\n");
		opcoesMenu();
		break;
		
		case 3: printf("\nO que você deseja fazer no menu: Serviços\n\n");
		opcoesMenu();
		break;
		
		case 4: printf("\nO que você deseja fazer no menu: Relatórios\n\n");
		opcoesMenu();
		break;
		
		case 5: printf("Saindo...");
		break;
		
		default: printf("Opção Inválida!\n\n"); // Trata a situação de um caractér inválido ser digitado
		menuPrincipal();
		system("pause");
	}
}

int opcoesMenu(){
	printf("Listar todos os elementos..................1\n");
	printf("Listar um elemento específico..............2\n");
	printf("Incluir elemento...........................3\n");
	printf("Alterar elemento...........................4\n");
	printf("Excluir elemento...........................5\n");
	printf("voltar para o menu principal...............6\n\n");
	printf("Digite sua opção ========================> ");
	
}

int opcoesFaxineiro(controleFaxineiro){
	int num;
	scanf("%d", &num);
	switch(num){ //switch case que dá acesso a todos os submenus
		case 1: printf("Listar elementos em desenvolvimento");
		listaTodosElementos();
		break;
		
		case 2: printf("Listar elemento específico em desenvolvimento");
		break;
		
		case 3: printf("Incluir elemento: \n\n");
		incluirFaxineiro(controleFaxineiro);
		controleFaxineiro++;
		break;
		
		case 4: printf("Alterar elemento em desenvolvimento");
		break;
		
		case 5: printf("Excluir elemento em desenvolvimento");
		break;
		
		case 6: printf("\nVoltando para o menu principal...\n\n");
		menuPrincipal();
		break;
		
		default: printf("Opção Inválida!\n\n"); // Trata a situação de um número inválido ser digitado
		opcoesMenu();
		system("pause");
	}
}


int incluirFaxineiro(int controleFaxineiro, struct faxineiro faxineiro[]){
	int cont = 0;
	int num;
	printf("Insira o CPF do faxineiro: ");
	gets(faxineiro[controleFaxineiro].cpf);
	printf("Insira o RG do faxineiro: ");
	gets(faxineiro[controleFaxineiro].rg);
	printf("Insira o NOME do faxineiro: ");
	gets(faxineiro[controleFaxineiro].nome);
	printf("Insira o SEXO do faxineiro: ");
	gets(faxineiro[controleFaxineiro].sexo);
	printf("Insira a DATA DE NASCIMENTO do faxineiro: ");
	gets(faxineiro[controleFaxineiro].datNasc);
	while (num != 2 && cont < 5){
		printf("Você pode inserir até 5 telefones.\n");
		printf("O que deseja fazer ?\n");
		printf("Inserir um telefone.............1\n");
		printf("Finalizar cadastro..............2\n");
		scanf("%d", &num);
		if(num==1){
			printf("Insira o TELEFONE do faxineiro: ");
			gets(faxineiro[controleFaxineiro].telefones[cont]);
			cont++;			
		}
		else{
			break;
		}
	}

}


int listaTodosElementos(struct faxineiro faxineiro[]){
	int contador;
	for(contador=0; contador<Max; contador++){
		printf("Dados do primeiro indice da lista de faxineiros: ");
		printf("\nCPF FUNCIONARIO %s", faxineiro[contador]);
		printf("\nRG FUNCIONARIO %s", faxineiro[contador]);
		printf("\nNOME FUNCIONARIO %s", faxineiro[contador]);
		printf("\nSEXO FUNCIONARIO %s", faxineiro[contador]);
		printf("\nDATA DE NASCIMENTO FUNCIONARIO %s", faxineiro[contador]);
		printf("\nTELEFONES FUNCIONARIO %s", faxineiro[contador]);	
	}
}


iniciaFaxineiro(struct faxineiro faxineiro[]){
	int g;
	for(g=0; g<Max; g++){
		strcpy(faxineiro[g].cpf, "null");
		strcpy(faxineiro[g].rg, "null");
		strcpy(faxineiro[g].nome, "null");
		strcpy(faxineiro[g].sexo, "null");
		strcpy(faxineiro[g].datNasc, "null");
		strcpy(faxineiro[g].telefones[g], "null");
	}
}
	

int main(){
	int controleFaxineiro = 0;
	int controleCliente = 0;
	int controleServico = 0;
	
	setlocale (LC_ALL, "Portuguese");
	
	struct faxineiro faxineiro[Max];
	struct cliente cli[Max];
	struct servico ser[Max];
	
	int g;
	for(g=0; g<Max; g++){
		strcpy(faxineiro[g].cpf, "0");
		strcpy(faxineiro[g].rg, "0");
		strcpy(faxineiro[g].nome, "0");
		strcpy(faxineiro[g].sexo, "0");
		strcpy(faxineiro[g].datNasc, "0");
		strcpy(faxineiro[g].telefones[g], "0");
	}
	
	
	menuPrincipal(faxineiro[Max]);
	
}
