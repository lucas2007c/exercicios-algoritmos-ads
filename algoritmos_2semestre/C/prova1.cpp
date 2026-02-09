#include <stdio.h>
#include <string.h>

void limpaNome(char[]);
//  O nome pode possuir caracteres especiais esse procedimento deve remover todos eles, mantendo somente letras e espaços
void corrigirNome(char[]);
// Esse procedimento é responsável por fazer com que a primeira letra de cada prenome/sobrenome deve estar em maiúscula e o restante em minúscula
void limpaCPF(char[]);
//  Esse procedimento é responsável por remover do CPF os caracteres especiais (a dica nesse momento é manter
// somente os números e depois adicionar os caracteres corretos conforme solicitado)
int contaNumeros(char[]);
// Essa função conta e retorna quantos caracteres numéricos existem no CPF
void corrigirCPF(char[]);
//  Esse procedimento insere os pontos e traços bem como separa os números do CPF conforme o padrão 000.000.000-00
void criptografar(char[], int);
void exibirDecripto(char[], int);
// esse procedimento faz o processo inverso do criptografar, porém ele NÃO ALTERA o conteúdo do texto enviado por parâmetro, ele só calcula os caracteres originais e exibe na tela
int main() {
	char nome[100];
	char cpf[15];
	int chave;

	printf("Digite o Nome: ");
	gets(nome);
	printf("Digite o CPF: ");
	gets(cpf);

	printf("Digite a Chave de Criptografia: ");
	scanf(" %d",&chave);
	limpaNome(nome);
	corrigirNome(nome);

	limpaCPF(cpf);
	if(contaNumeros(cpf) != 11)
		strcpy(cpf,"000.000.000-00");
	else
		corrigirCPF(cpf);


	printf("\nNome Corrigido: %s\n",nome);
	printf("CPF Corrigido: %s\n",cpf);

	criptografar(nome, chave);
	criptografar(cpf, chave);

	printf("\nNome Criptografado: %s\n",nome);
	printf("CPF Criptografado: %s\n",cpf);

	printf("\nNome DeCriptografado: ");
	exibirDecripto(nome,chave);

	printf("CPF DeCriptografado: ");
	exibirDecripto(cpf,chave);
	return 0;
}

void limpaNome(char nome[]) {
	int nomeSemSimbolos = 0;
	for(int i = 0; nome[i] != '\0'; i++) {
		if(nome[i] >= 65 && nome[i] <= 90) {
			nome[i] += 32;
		}

		if(nome[i] == 32 || (nome[i] >= 97 && nome[i] <= 122)) {
			nome[nomeSemSimbolos] = nome[i];
			nomeSemSimbolos++;
		}
	}
	nome[nomeSemSimbolos] = '\0';
}

void corrigirNome(char nome[]) {
	int nomeCorrigido = 0;
	for(int i = 0; nome[i] != '\0'; i++) {
		if(i == 0 || nome[i - 1] == 32) {
			nome[i] -= 32;
			nome[nomeCorrigido] = nome[i];
		}
		nomeCorrigido++;
	}
	nome[nomeCorrigido] = '\0';
}

void limpaCPF(char cpf[]) {
	int cpfSemSimbolos = 0;
	for(int i = 0; cpf[i] != '\0'; i++) {
		if(cpf[i] >= 48 && cpf[i] <= 57) {
			cpf[cpfSemSimbolos] = cpf[i];
			cpfSemSimbolos++;
		}
	}
	cpf[cpfSemSimbolos] = '\0';
}

int contaNumeros(char cpf[]) {
	int numeros = 0;
	for(int i = 0; cpf[i] != '\0'; i++) {
		if(cpf[i] >= 48 && cpf[i] <= 57) {
			numeros++;
		}
	}
	return numeros;
}

void corrigirCPF(char cpf[]) {
	char cpfComSimbolos[15];
	int i = 0;
	int j = 0;

	while(cpf[i] != '\0') {
		switch(j) {
			case 3:
			case 7: {
				cpfComSimbolos[j] = '.';
				break;
			}
			case 11: {
				cpfComSimbolos[j] = '-';
				break;
			}
			default: {
				cpfComSimbolos[j] = cpf[i];
				i++;
				break;
			}
		}
		j++;
	}
	cpfComSimbolos[j] = '\0';
	strcpy(cpf, cpfComSimbolos);
}

void criptografar(char string[], int chave) {
	for(int i = 0; string[i] != '\0'; i++) {
		string[i] = string[i] - chave;
	}
};

void exibirDecripto(char string[], int chave) {
	for(int i = 0; string[i] != '\0'; i++) {
		printf("%c", string[i] + chave);
	}
	printf("\n");
};














