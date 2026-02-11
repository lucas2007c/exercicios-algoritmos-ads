/*
Crie um procedimento que recebe uma string e remove todas as ocorrências de um caractere informado pelo usuário, 
ao final, o procedimento deve exibir a string resultante.
*/

#include <stdio.h>
#include <stdlib.h>

void removerCaracter(char[], char, char[]);

int main(void){
	char frase[100];
	char fraseSemCaracter[100];
	char caracter;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("Digite um caracter para remover da frase: ");
	scanf("%c", &caracter);
	
	removerCaracter(frase, caracter, fraseSemCaracter);
	
	puts(fraseSemCaracter);
	
	
	system("pause");
	return 0;
}

void removerCaracter(char frase[], char caracter, char fraseSemCaracter[]){
	int j = 0;
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] != caracter){
			fraseSemCaracter[j] = frase[i];
			j++;
		}
	}
	fraseSemCaracter[j] = '\0';
}
