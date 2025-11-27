/*
Crie um Registro com as informações conforme o arquivo dadosPessoas.csv.
Crie um vetor desse registro com 120 posições.
Leia o arquivo dadosPessoas.csv e alimente esse vetor onde que cada registro corresponde as dados de uma linha do arquivo.
Agora, exiba todos os dados do vetor conforme exemplo abaixo:
Nome: Tiago Pietro Pires
Idade: 33
CPF: 350.181.306-60
Data de Nascimento: 27/07/1989
Sexo: Masculino
Endereco: Rua Afeia,154,Jorge Teixeira,Manaus,AM
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
	char nome[50];
	char idade[4];
	char cpf[15];
	char data_nascimento[11];
	char sexo[9];
	char logradouro[50];
	char numero [5];
	char bairro[50];
	char cidade[50];
	char estado[2];
};

int main(void) {
	FILE *arquivo;
	char path[100] = "arquivos/dadosPessoas.csv";
	Pessoa pessoas[120];
	char linha[200];

	arquivo = fopen(path, "r");
	if(!arquivo) {
		printf("Erro ao abrir o arquivo para leitura!\n");
		return 1;
	}

	// lê a primeira linha com os nomes das colunas
	fgets(linha, sizeof(linha), arquivo);

	int x = 1;

	while (fgets(linha, sizeof(linha), arquivo) != NULL) {
		int col = 0;
		int index = 0;
		
		for(int i = 0; linha[i] != '\0'; i++) {
			if(linha[i] != ',') {
				switch(col) {
					case 0:
						pessoas[x].nome[index] = linha[i];
						break;
					case 1:
						pessoas[x].idade[index] = linha[i];
						break;
					case 2:
						pessoas[x].cpf[index] = linha[i];
						break;
					case 3:
						pessoas[x].data_nascimento[index] = linha[i];
						break;
					case 4:
						pessoas[x].sexo[index] = linha[i];
						break;
					case 5:
						pessoas[x].endereco[index] = linha[i];
						break;
				}
				index++;
			} else {
				index = 0;
				col++;
			}
		}
		
		x++;
	}

	for(int i = 0; i < 120; i++) {
		printf("Nome: %s\n", pessoas[i].nome);
		printf("Idade: %s\n", pessoas[i].idade);
		printf("CPF: %s\n", pessoas[i].cpf);
		printf("Data De Nascimento: %s\n", pessoas[i].data_nascimento);
		printf("Sexo: %s", pessoas[i].sexo);
		printf("Endereco: %s\n\n", pessoas[i].endereco);
	}

	system("pause");
	return 0;
}
