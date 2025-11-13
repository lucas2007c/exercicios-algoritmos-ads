/*
Crie uma struct Pessoa com nome e CPF. Busque uma pessoa pelo CPF em um vetor de 10 pessoas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 10

struct Pessoa {
	char nome[50];
	char cpf[12];
};

void buscar(Pessoa pessoas[], char cpf[]);

int main(void) {
	srand(time(NULL));

	char cpf[11];

	Pessoa pessoas[N];
	char nomes[10][50] = {"Lucas", "Helena", "Paulo", "Maria", "Luis", "Felipe", "Arthur", "Carlos", "Renan", "Ederson"};

	for(int i = 0; i < N; i++) {
		int indice = rand() % 10;
		char cpfGen[12];
		strcpy(pessoas[i].nome, nomes[indice]);

		for(int j = 0; j < 11; j++) {
			cpfGen[j] = '0' + rand() % 10;
		}

		strcpy(pessoas[i].cpf, cpfGen);
	}

	while(true) {
		printf("--- CPFs disponiveis para busca: ---\n");
		for(int i = 0; i < N; i++)
			puts(pessoas[i].cpf);

		printf("\nDigite um cpf para buscar(sair para encerrar): ");
		gets(cpf);

		if(strcmp(cpf, "sair") == 0)
			break;

		if(strlen(cpf) == 11)
			buscar(pessoas, cpf);
		else {
			printf("Cpf invalido. Tente Novamente.\n");
		}
		printf("--------------------------------\n\n\n");
	}

	system("pause");
	return 0;
}

void buscar(Pessoa pessoas[], char cpf[]) {
	for(int i = 0; i < N; i++) {
		if(strcmp(pessoas[i].cpf, cpf) == 0) {
			printf("Nome: %s\n", pessoas[i].nome);
			return;
		}
	}

	printf("CPF nao encontrado. Tente novamente.\n");
}





