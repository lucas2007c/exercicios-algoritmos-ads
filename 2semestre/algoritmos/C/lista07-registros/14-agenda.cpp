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
	bool ativo;
};

struct Agenda {
	char nome[50];
	int qtdContatos;
	Contato contatos[QTD_CONTATOS];
};

void cadastrar(Agenda *agenda);
bool buscar(Agenda *agenda, char email[100]);
void excluir(Agenda *agenda, char email[100]);


int main(void) {
	srand(time(NULL));
	char nomes[10][20] = {"Joao", "Carlos", "Lucas", "Rafael", "Pedro", "Marcos", "Gustavo", "Felipe", "Andre", "Bruno"};
	int opcao;
	char emailDigitado[100];

	struct Agenda agenda;
	struct Contato contatos[QTD_CONTATOS];

	printf("De um nome para sua agenda: ");
	gets(agenda.nome);

	for(int i = 0; i < QTD_CONTATOS - 8; i++) {
		int nomeIdx = rand() % 10;
		strcpy(agenda.contatos[i].nome, nomes[nomeIdx]);

		sprintf(agenda.contatos[i].email, "%s%d@gmail.com", agenda.contatos[i].nome, (rand() % 99) + 1);

		int ddd = (rand() % 90) + 10;
		int numPart1 = (rand() % 10000) + 90000;
		int numPart2 = (rand() % 1000) + 9000;
		sprintf(agenda.contatos[i].telefone, "(%d) %d-%d", ddd, numPart1, numPart2);

		agenda.contatos[i].ativo = true;

		agenda.qtdContatos++;
	}

	do {
		printf("------------ %s ------------\n", agenda.nome);
		printf("Contatos (%d/%d):\n", agenda.qtdContatos, QTD_CONTATOS - 1);
		for(int i = 0; i < agenda.qtdContatos; i++) {
			if(agenda.contatos[i].ativo) {
				puts(agenda.contatos[i].nome);
				printf("%s - %s\n\n", agenda.contatos[i].telefone, agenda.contatos[i].email);
			}
		}

		printf("Escolha uma opcao:\n");
		printf("1-Buscar Contato\n2-Adicionar Contato\n3-Excluir Contato\n0-sair");
		scanf("%d", &opcao);

		switch(opcao) {
			case 1:
				printf("\n\nDigite o email do contato que deseja buscar:\n");
				getchar();
				gets(emailDigitado);
				buscar(&agenda, emailDigitado);
				break;
			case 2:
				cadastrar(&agenda);
				break;
			case 3:
				printf("\n\nDigite o email do contato que deseja excluir:\n");
				getchar();
				gets(emailDigitado);
				excluir(&agenda, emailDigitado);
				break;
			case 0:
				printf("\n\n");
		}
	} while(opcao != 0);

	system("pause");
	return 0;
}

void cadastrar(Agenda *agenda) {
	if(agenda->qtdContatos == QTD_CONTATOS - 1) {
		printf("Voce atingiu o maximo de contatos.\n\n");
		return;
	}
	struct Contato novoContato;

	getchar();
	printf("Digite o nome do contato: ");
	gets(novoContato.nome);

	printf("Digite o telefone do novo contato: (00) 00000-0000:");
	gets(novoContato.telefone);

	printf("Digite o email do novo contato: ");
	gets(novoContato.email);
	
	novoContato.ativo = true;

	agenda->contatos[agenda->qtdContatos] = novoContato;
	agenda->qtdContatos++;

	printf("Contato adicionado!\n\n");
};

bool buscar(Agenda *agenda, char email[100]) {

	for(int i = 0; i < agenda->qtdContatos; i++) {
		if(strcmp(agenda->contatos[i].email, email) == 0 && agenda->contatos[i].ativo) {
			printf("Nome: %s\nTelefone: %s\nEmail: %s\n\n", agenda->contatos[i].nome, agenda->contatos[i].telefone, agenda->contatos[i].email);
			return true;
		}
	}

	printf("Contato nao encontrado!\n\n");
	return false;
}

void excluir(Agenda *agenda, char email[100]) {
	if(!buscar(agenda, email)) {
		printf("Esse contato nao existe.\n\n");
		return;
	}

	for(int i = 0; i < agenda->qtdContatos; i++) {
		if(strcmp(agenda->contatos[i].email, email) == 0) {
			agenda->contatos[i].ativo = false;
		}
	}

	printf("Contato excluido com sucesso.\n\n");
};




