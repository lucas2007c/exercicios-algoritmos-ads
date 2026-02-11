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
	char estado[3];
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

	int x = 0;

	while (fgets(linha, sizeof(linha), arquivo) != NULL) {
		int col = 0;
		int index = 0;
		char textoCampo[300];

		for(int i = 0; linha[i] != '\0'; i++) {
			if(linha[i] != ',') {
				textoCampo[index] = linha[i];
				index++;
			} else {
				textoCampo[index] = '\0';
				switch(col) {
					case 0:
						strcpy(pessoas[x].nome, textoCampo);
						break;
					case 1:
						strcpy(pessoas[x].idade, textoCampo);
						break;
					case 2:
						strcpy(pessoas[x].cpf, textoCampo);
						break;
					case 3:
						strcpy(pessoas[x].data_nascimento, textoCampo);
						break;
					case 4:
						strcpy(pessoas[x].sexo, textoCampo);
						break;
					case 5:
						strcpy(pessoas[x].logradouro, textoCampo);
						break;
					case 6:
						strcpy(pessoas[x].numero, textoCampo);
						break;
					case 7:
						strcpy(pessoas[x].bairro, textoCampo);
						break;
					case 8:
						strcpy(pessoas[x].cidade, textoCampo);
						break;
					default:
						break;
				}

				index = 0;
				col++;
				textoCampo[0] = '\0';
			}
		}
		
		textoCampo[2] = '\0';
		strcpy(pessoas[x].estado, textoCampo);

		x++;
	}

	fclose(arquivo);
	
	for(int i = 0; i < 120; i++) {
		printf("Nome: %s\n", pessoas[i].nome);
		printf("Idade: %s\n", pessoas[i].idade);
		printf("CPF: %s\n", pessoas[i].cpf);
		printf("Data De Nascimento: %s\n", pessoas[i].data_nascimento);
		printf("Sexo: %s\n", pessoas[i].sexo);
		printf("Endereco: %s,%s,%s,%s,%s\n\n", pessoas[i].logradouro, pessoas[i].numero, pessoas[i].bairro, pessoas[i].cidade, pessoas[i].estado);
	}

	system("pause");
	return 0;
}
