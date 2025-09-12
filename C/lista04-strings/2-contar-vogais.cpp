/*
Escreva um programa que leia uma string e chama a função int contarVogais(char[]) que conta
e retorna quantas vogais (a, e, i, o, u) ela possui. Exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int contarVogais(char[]);

int main(void){
	char palavra[50];
	int qtdVogais;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	// qtdVogais = contarVogais(palavra);
	
	// \" quer dizer que aspas eh um texto e nao as aspas do printf
	printf("\nA palavra \"%s\" tem %d vogais\n", palavra, qtdVogais);
	
	system("pause");
	return 0;
}
