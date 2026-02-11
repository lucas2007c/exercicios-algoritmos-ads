/*
Escreva um programa que possui o procedimento ler(char[]*) que recebe uma variável por referência e faz a leitura de uma frase. 
Posteriormente crie o procedimento contaPalavras(char[]) que conta e exibe quantas quantas palavras ela possui (dica: conte os espaços e some 1).
*/

#include<stdio.h>
#include<stdlib.h>

void ler(char[]);
int contaPalavras(char[]);

int main(void){
	char frase[100];
	
	printf("Digite uma frase: ");
	ler(frase);
	
	printf("A frase tem %d palavras\n", contaPalavras(frase));
	
	system("pause");
	return 0;
}

void ler(char frase[]){
	gets(frase);
}

int contaPalavras(char frase[]){
	int qtdPalavras = 0;
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] == 32){
			qtdPalavras++;
		}
	}
	qtdPalavras++;
	return qtdPalavras;
}
