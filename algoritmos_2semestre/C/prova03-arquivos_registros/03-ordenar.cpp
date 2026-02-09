/*
Ler o arquivo dados2.csv e armazenar os dados em um vetor de registros.
Crie um procedimento para ordenar os registros por nome
e um procedimento para gravar o vetor de registros ordenados no arquivo dadosOrdenados.csv.
*/

#define N 220

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Pessoa {
	char nome[100], cpf[20], idade[4], sexo[15], cidade[100], estado[3];
};

void ordenar(Pessoa pessoas[]);
void gravarOrdenados(Pessoa pessoas[], FILE *arquivo);

int main(void) {
	FILE *arquivo;
	char path[100] = "arquivos/dados2.csv";
	char pathNovo[100] = "arquivos/dadosOrdenados.csv";
	Pessoa pessoas[N];
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
						strcpy(pessoas[x].cpf, textoCampo);
						break;
					case 2:
						strcpy(pessoas[x].idade, textoCampo);
						break;
					case 3:
						strcpy(pessoas[x].sexo, textoCampo);
						break;
					case 4:
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

	ordenar(pessoas);

	arquivo = fopen(pathNovo, "w");
	if(!arquivo) {
		printf("Erro ao abrir o arquivo para leitura!\n");
		return 1;
	}

	gravarOrdenados(pessoas, arquivo);

	fclose(arquivo);

	printf("arquivo dadosOrdenados.csv criado/atualizado.\n");
	system("pause");
	return 0;
}

void ordenar(Pessoa pessoas[]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<(N-1); j++) {
			if(strcmp(pessoas[j].nome, pessoas[j + 1].nome) == 1) {
				Pessoa temp = pessoas[j];
				pessoas[j] = pessoas[j + 1];
				pessoas[j + 1] = temp;
			}
		}
	}
}

void gravarOrdenados(Pessoa pessoas[], FILE *arquivo) {
	fprintf(arquivo, "nome,cpf,idade,sexo,cidade,estado\n");

	for(int i = 0; i < N; i++) {
		fprintf(arquivo, "%s,%s,%s,%s,%s,%s\n", pessoas[i].nome, pessoas[i].cpf, pessoas[i].idade, pessoas[i].sexo, pessoas[i].cidade, pessoas[i].estado);
	}
}




