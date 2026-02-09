/*
Dada uma string que contém letras e números, crie outra string contendo apenas as letras.
Exemplo:
Entrada: "a1b2c3"
Saída: "abc"
*/

#include <stdio.h>
#include <stdlib.h>

void removerNumeros(char[], char[]);

int main(void){
	char frase[100];
	char fraseSemNumeros[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	removerNumeros(frase, fraseSemNumeros);
	
	printf("Resultado:\n");
	puts(fraseSemNumeros);
	
	
	system("pause");
	return 0;
}

void removerNumeros(char frase[], char fraseSemNumeros[]){
	int j = 0;
	for(int i = 0; frase[i] != '\0'; ++i){
		if(!(frase[i] >= 48 && frase[i] <= 57)){
			fraseSemNumeros[j] = frase[i];
			j++;
		}
	}
	fraseSemNumeros[j] = '\0';
}
