#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define Max 10

//============================================================= Defini��o das Estruturas ===================================================================//

typedef struct {
	char cpf[20];
	char rg[20];
	char nome[30];
	char sexo[10];
	char dataNasc[20];
	char telefones[5][20];
}faxineiro;

typedef struct {
	char cpf[20];
	char nome[30];
	char dataNasc[20];
	char endereco[50];
	char cep[20];
	char cidade[30];
	char emails[5][50]; 
	char telefones[5][20];
}cliente;

typedef struct {
	char cpfFaxineiro[20];
	char cpfCliente[20];
	char dataServico[20];
	char valor[10];
}servico;

//============================================================= Fun��o do Menu Principal ===================================================================//

int menuPrincipal(){
	int casePrincipal;
	printf("Submenu de Faxineiros............1\n");
	printf("Submenu de Clientes..............2\n");
	printf("Submenu de Servi�os..............3\n");
	printf("Submenu de Relat�rios............4\n");
	printf("Sair.............................5\n\n");
	printf("Digite sua op��o ==========> ");
	scanf("%d", &casePrincipal);
	switch(casePrincipal){ 
		case 1: printf("\nO que voc� deseja fazer no menu: Faxineiros\n\n");
		opcoesMenu();
		opcoesFaxineiro();
		break;
		
		case 2: printf("\nO que voc� deseja fazer no menu: Clientes\n\n");
		opcoesMenu();
		break;
		
		case 3: printf("\nO que voc� deseja fazer no menu: Servi�os\n\n");           //Uma fun��o que apresenta quais os 
		opcoesMenu();                                                                //submenus dispon�veis e um switch case
		break;                                                                       //para acessar cada op��o.
		
		case 4: printf("\nO que voc� deseja fazer no menu: Relat�rios\n\n");
		opcoesMenu();
		break;
		
		case 5: printf("Saindo...");
		break;
		
		default: printf("Op��o Inv�lida!\n\n"); 
		menuPrincipal();
		system("pause");
	}
}

//============================================================= Op��es dos Submenus ===================================================================//

int opcoesMenu(){
	printf("Listar todos os elementos..................1\n");
	printf("Listar um elemento espec�fico..............2\n");
	printf("Incluir elemento...........................3\n");      //Uma fun��o de strings apenas para mostrar
	printf("Alterar elemento...........................4\n");      //quais as op��es dos submenus.
	printf("Excluir elemento...........................5\n");
	printf("voltar para o menu principal...............6\n\n");
	printf("Digite sua op��o ========================> ");
	
}

//============================================================= Defini��o dos Submenus ===================================================================//

int opcoesFaxineiro(){
	int num;
	scanf("%d", &num);
	switch(num){ 
		case 1: printf("Listar elementos em desenvolvimento\n");
		
		menuPrincipal();
		break;
		
		case 2: printf("Listar elemento espec�fico em desenvolvimento\n");
		
		menuPrincipal();
		break;
		
		case 3: printf("Incluir elemento: \n\n");                                //Uma fun��o para acessar cada op��o
		//iniciaFaxineiro();
		
		menuPrincipal();
		break;                                                                   //do submenu "Faxineiro" por meio de um switch case.
		                                                                         
		case 4: printf("Alterar elemento em desenvolvimento\n");                 //O mesmo modelo se aplica para os 
		
		menuPrincipal();
		break;                                                                   //outros submenus.
		
		case 5: printf("Excluir elemento em desenvolvimento\n");
		
		menuPrincipal();
		break;
		
		case 6: printf("\nVoltando para o menu principal...\n\n");
		menuPrincipal();
		break;
		
		default: printf("Op��o Inv�lida!\n\n");
		opcoesMenu();
		system("pause");
	}
}

int opcoesCliente(){
	int num;
	scanf("%d", &num);
	switch(num){ 
		case 1: printf("Listar elementos em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 2: printf("Listar elemento espec�fico em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 3: printf("Incluir elemento: \n\n");
		
		menuPrincipal();
		break;
		
		case 4: printf("Alterar elemento em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 5: printf("Excluir elemento em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 6: printf("\nVoltando para o menu principal...\n\n");
		menuPrincipal();
		break;
		
		default: printf("Op��o Inv�lida!\n\n");
		opcoesMenu();
		system("pause");
	}
}

int opcoesServico(){
	int num;
	scanf("%d", &num);
	switch(num){ 
		case 1: printf("Listar elementos em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 2: printf("Listar elemento espec�fico em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 3: printf("Incluir elemento: \n\n");
		
		menuPrincipal();
		break;
		
		case 4: printf("Alterar elemento em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 5: printf("Excluir elemento em desenvolvimento");
		
		menuPrincipal();
		break;
		
		case 6: printf("\nVoltando para o menu principal...\n\n");
		menuPrincipal();
		break;
		
		default: printf("Op��o Inv�lida!\n\n");
		opcoesMenu();
		system("pause");
	}
}

int opcoesRelatorio(){
	int num;
	scanf("%d", &num);
	switch(num){ //switch case que d� acesso a todos os submenus
		case 1: printf("Clientes do faxineiro X entre as datas Y e Z: ");
		
		menuPrincipal();
		break;
		
		case 2: printf("Servi�os do dia X: ");
		
		menuPrincipal();
		break;
		
		case 3: printf("Servi�os prestados pelo faxineiro X: ");
		
		menuPrincipal();
		break;
		
		case 4: printf("\nVoltando para o menu principal...\n\n");
		menuPrincipal();
		break;
		
		default: printf("Op��o Inv�lida!\n\n");
		opcoesMenu();
		system("pause");
	}
}

//============================================================= Fun��es de execu��o do submenu FAXINEIRO ===================================================================//

iniciaFaxineiro(faxineiro listaFaxineiro[]){
	int indice;
	for(indice=0; indice<Max; indice++){
		strcpy(listaFaxineiro[indice].cpf, "null");
		strcpy(listaFaxineiro[indice].rg, "null");
		strcpy(listaFaxineiro[indice].nome, "null");
		strcpy(listaFaxineiro[indice].sexo, "null");
		strcpy(listaFaxineiro[indice].dataNasc, "null");
		strcpy(listaFaxineiro[indice].telefones[indice], "null");
	}
}

int listaTodosElementosFaxineiro(faxineiro listaFaxineiro[]){
	
}

int listarElementoEspecificoFaxineiro(faxineiro listaFaxineiro[]){
	
}

int incluirElementoFaxineiro(faxineiro listaFaxineiro[]){
	/*int cont = 0;
	int num;
	printf("Insira o CPF do faxineiro: ");
	gets(listaFaxineiro[controleFaxineiro].cpf);
	printf("Insira o RG do faxineiro: ");
	gets(listaFaxineiro[controleFaxineiro].rg);
	printf("Insira o NOME do faxineiro: ");
	gets(listaFaxineiro[controleFaxineiro].nome);
	printf("Insira o SEXO do faxineiro: ");
	gets(listaFaxineiro[controleFaxineiro].sexo);
	printf("Insira a DATA DE NASCIMENTO do faxineiro: ");
	gets(listaFaxineiro[controleFaxineiro].datNasc);
	while (num != 2 && cont < 5){
		printf("Voc� pode inserir at� 5 telefones.\n");
		printf("O que deseja fazer ?\n");
		printf("Inserir um telefone.............1\n");
		printf("Finalizar cadastro..............2\n");
		scanf("%d", &num);
		if(num==1){
			printf("Insira o TELEFONE do faxineiro: ");
			gets(listaFaxineiro[controleFaxineiro].telefones[cont]);
			cont++;			
		}
		else{
			break;
		}
	}*/
}

int alterarElementoFaxineiro(faxineiro listaFaxineiro[]){
	
}

int excluirElementoFaxineiro(faxineiro listaFaxineiro[]){
	
}

//============================================================= Fun��es de execu��o do submenu CLIENTE ===================================================================//

iniciaCliente(cliente listaCliente[]){
	int indice;
	for(indice=0; indice<Max; indice++){
		strcpy(listaCliente[indice].cpf, "null");
		strcpy(listaCliente[indice].nome, "null");
		strcpy(listaCliente[indice].dataNasc, "null");
		strcpy(listaCliente[indice].endereco, "null");
		strcpy(listaCliente[indice].cep, "null");
		strcpy(listaCliente[indice].cidade, "null");
		strcpy(listaCliente[indice].emails[indice], "null");
		strcpy(listaCliente[indice].telefones[indice], "null");
	}
}

//============================================================= Fun��es de execu��o do submenu SERVI�O ===================================================================//

iniciaServico(servico listaServico[]){
	int indice;
	for(indice=0; indice<Max; indice++){
		strcpy(listaServico[indice].cpfFaxineiro, "null");
		strcpy(listaServico[indice].cpfCliente, "null");
		strcpy(listaServico[indice].dataServico, "null");
		strcpy(listaServico[indice].valor, "null");
	}
}

//============================================================= Fun��es de execu��o do submenu RELAT�RIO ===================================================================//

/*iniciaRelatorio(listaRelatorio){
	int indice;
	for(indice=0; indice<Max; indice++){
		strcpy(listaRelatorio[indice].cpf, "null");
		strcpy(listaRelatorio[indice].rg, "null");
		strcpy(listaRelatorio[indice].nome, "null");
		strcpy(listaRelatorio[indice].sexo, "null");
		strcpy(listaRelatorio[indice].dataNasc, "null");
		strcpy(listaRelatorio[indice].telefones[indice], "null");
	}
}*/

//============================================================= Fun��es MAIN ===================================================================//

int main(void){
	int controleFaxineiro = 0;
	int controleCliente = 0;
	int controleServico = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	faxineiro listaFaxineiro[Max];
	cliente listaCliente[Max];
	servico listaServico[Max];
	
	menuPrincipal();
	
}
