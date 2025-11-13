/*
Crie uma struct Agenda, com contatos (nome, telefone, email). Implemente cadastrar, excluir e buscar contatos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define QTD_CONTATOS 11

struct Contato {
	char nome[20];
	char telefone[16];
	char email[100];
};

struct Agenda {
	char nome[50];
	int qtdContatos;
	Contato contatos[QTD_CONTATOS];
};

void cadastrar(Agenda *agenda);
void buscar(Agenda *agenda, char email[100]);
void excluir(Agenda *agenda, char email[100]);


int main(void) {
	srand(time(NULL));
	char nomes[10][20] = {"Joao", "Carlos", "Lucas", "Rafael", "Pedro", "Marcos", "Gustavo", "Felipe", "Andre", "Bruno"};
	
	struct Agenda agenda;
	struct Contato contatos[QTD_CONTATOS];
	
	printf("De um nome para sua agenda: ");
	gets(agenda.nome);
	
	printf("------------ %s ------------\n", agenda.nome);
	printf("Contatos (%d/%d): ", agenda.qtdContatos, QTD_CONTATOS - 1);
	for(int i = 0; i < QTD_CONTATOS - 8; i++){
		int nomeIdx = rand() % 10;
		strcpy(agenda.contatos[i].nome, nomes[nomeIdx]);
		
		sprintf(agenda.contatos[i].email, "%s@gmail.com", agenda.contatos[i].nome);
		
		int ddd = (rand() % 90) + 10;
		int numPart1 = (rand() % 10000) + 90000;
		int numPart2 = (rand() % 1000) + 9000;
		sprintf(agenda.contatos[i].telefone, "(%d) %d-%d", ddd, numPart1, numPart2);
		
		puts(agenda.contatos[i].nome);
		printf("%s - %s\n\n", agenda.contatos[i].telefone, agenda.contatos[i].email);
		agenda.qtdContatos++;
	}
	
	cadastrar(&agenda);
	
	system("pause");
	return 0;
}

void cadastrar(Agenda *agenda){
	if(agenda->qtdContatos == QTD_CONTATOS - 1){
		printf("Voce atingiu o maximo de contatos.\n");
		return;
	}
	struct Contato novoContato;
	printf("Digite o nome do contato: ");
	gets(novoContato.nome);
	
	printf("Digite o telefone do novo contato: (00) 00000-0000");
	gets(novoContato.telefone);
	
	printf("Digite o email do novo contato: ");
	gets(novoContato.email);
	
	agenda->contatos[agenda->qtdContatos] = novoContato;
	
	printf("Contato adicionado!\n");
};

void buscar(Agenda *agenda, char email[100]){
	
	for(int i = 0; i < agenda->qtdContatos; i++){
		if(strcmp(agenda->contatos[i].email, email) == 0){
			printf("Nome: %s\nTelefone: %s\nEmail: %s\n", agenda->contatos[i].nome, agenda->contatos[i].telefone, agenda->contatos[i].email);
			return;
		}
	}
	
	printf("Contato nao encontrado!\n");
}

void excluir(Agenda *agenda, char email[100]);




