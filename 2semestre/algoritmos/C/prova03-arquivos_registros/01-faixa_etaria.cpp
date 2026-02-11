/*
Ler o arquivo dados3.csv e informar quantos registros por faixa etária existem no arquivo conforme a tabela abaixo:
Criança - 0 a 11 anos
Adolescente - 12 a 17 anos
Jovem adulto - 18 a 29 anos
Adulto - 30 a 59 anos
Idoso - 60 anos ou mais
Exemplo de saída:

Crianca: 9 registros
Adolescente: 11 registros
Jovem adulto: 6 registros
Adulto: 27 registros
Idoso: 18 registros
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct Pessoa {
	char cpf[15];
	char nome[100];
	char estado[2];
	char logradouro[100];
	char numero [10];
	char idade[4];
	char bairro[100];
	char cidade[100];
};

struct FaixaEtaria {
	int crianca = 0, adolescente, jovemAdulto, adulto, idoso;
};

int main(void) {
	FILE *arquivo;
	char path[100] = "arquivos/dados3.csv";
	Pessoa pessoas[220];
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
						strcpy(pessoas[x].cpf, textoCampo);
						break;
					case 1:
						strcpy(pessoas[x].nome, textoCampo);
						break;
					case 2:
						strcpy(pessoas[x].estado, textoCampo);
						break;
					case 3:
						strcpy(pessoas[x].logradouro, textoCampo);
						break;
					case 4:
						strcpy(pessoas[x].numero, textoCampo);
						break;
					case 5:
						strcpy(pessoas[x].idade, textoCampo);
						break;
					case 6:
						strcpy(pessoas[x].bairro, textoCampo);
						break;
					case 7:
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

		x++;
	}

	fclose(arquivo);

	struct FaixaEtaria faixa;

	for(int i = 0; i < 220; i++) {
		int idade = atoi(pessoas[i].idade);

		if(idade <= 11) {
			faixa.crianca++;
		} else if (idade <= 17) {
			faixa.adolescente++;
		} else if(idade <= 29) {
			faixa.jovemAdulto++;
		} else if (idade <= 59) {
			faixa.adulto++;
		} else {
			faixa.idoso++;
		}
	}

	printf("Crianca: %d Registros\n", faixa.crianca);
	printf("Adolescente: %d Registros\n", faixa.adolescente);
	printf("Jovem Adulto: %d Registros\n", faixa.jovemAdulto);
	printf("Adulto: %d Registros\n", faixa.adulto);
	printf("Idoso: %d Registros\n", faixa.idoso);

	system("pause");
	return 0;
}
