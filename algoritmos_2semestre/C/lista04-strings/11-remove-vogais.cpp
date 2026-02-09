/*
Leia uma string e remova todas as vogais, exibindo a string resultante.
Exemplo:
Entrada: "computador"
Saída: "cmptdr"
*/

#include <stdio.h>
#include <stdlib.h>

void removerVogais(char[], char[]);

int main(void){
	char frase[100];
	char fraseSemVogais[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	removerVogais(frase, fraseSemVogais);
	
	printf("Resultado:\n");
	puts(fraseSemVogais);
	
	
	system("pause");
	return 0;
}

void removerVogais(char frase[], char fraseSemVogais[]){
	int j = 0;
	for(int i = 0; frase[i] != '\0'; ++i){
		if(frase[i] != 'a' && frase[i] != 'A' && frase[i] != 'e' && frase[i] != 'E' && frase[i] != 'i' 
		&& frase[i] != 'I' && frase[i] != 'o' && frase[i] != 'O' && frase[i] != 'u' && frase[i] != 'U'){
			fraseSemVogais[j] = frase[i];
			j++;
		}
	}
	fraseSemVogais[j] = '\0';
}
