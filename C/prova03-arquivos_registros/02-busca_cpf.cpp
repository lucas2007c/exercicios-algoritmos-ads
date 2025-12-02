/*
Ler o arquivo dados1.csv e armazenar os dados em um vetor de registros.
O programa deve solicitar então ao usuário um CPF para ser buscado.
Crie um procedimento que recebe como parâmetros o vetor dos registros e o CPF a ser buscado. Esse procedimento deve
procurar pelo CPF no vetor de registros, se for encontrado deve exibir os dados relativos a esse CPF dessa forma
(supondo que o CPF digitado seja 686.741.398-68):
Nome:Catarina Helena Adriana Galvao
Idade:48
CPF:686.741.398-68
Data de Nascimento:06/05/1974
Sexo:Feminino
Endereco:Avenida Projetada,452,Cohatrac IV,Sao Luis,MA

se o CPF não for encontrado, deve exibir a mensagem "CPF nao encontrado na base de dados !".
*/

#define N 220

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Pessoa {
	char nome[100], idade[4], cpf[20], data_nasc[20], sexo[15], logradouro[100], numero[4], bairro[100], cidade[100], estado[3];
};

void buscaCPF(Pessoa pessoas[], char cpf[]);

int main(void) {
	FILE *arquivo;
	char path[100] = "arquivos/dados1.csv";
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
						strcpy(pessoas[x].idade, textoCampo);
						break;
					case 2:
						strcpy(pessoas[x].cpf, textoCampo);
						break;
					case 3:
						strcpy(pessoas[x].data_nasc, textoCampo);
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

	char cpf[20];
	printf("Digite um cpf para ser buscado: ");
	gets(cpf);

	buscaCPF(pessoas, cpf);

	system("pause");
	return 0;
}

void buscaCPF(Pessoa pessoas[], char cpf[]) {
	for(int i = 0; i < N; i++) {
		if(strcmp(pessoas[i].cpf, cpf) == 0) {
			printf("Nome: %s\n", pessoas[i].nome);
			printf("Idade: %s\n", pessoas[i].idade);
			printf("CPF: %s\n", pessoas[i].cpf);
			printf("Data de Nascimento: %s\n", pessoas[i].data_nasc);
			printf("Sexo: %s\n", pessoas[i].sexo);
			printf("Endereco: %s,%s,%s,%s,%s\n\n", pessoas[i].logradouro, pessoas[i].numero, pessoas[i].bairro, pessoas[i].cidade, pessoas[i].estado);
			return;
		}
	}

	printf("CPF nao encontrado na base de dados!\n");
}
