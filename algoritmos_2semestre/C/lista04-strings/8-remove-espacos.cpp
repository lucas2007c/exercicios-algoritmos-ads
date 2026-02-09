/*
Escreva um programa que leia uma frase e remova todos os espaços, exibindo a string resultante.
Exemplo:
Entrada: "hoje e dia"
Saída: "hojeedia"
*/

#include <stdio.h>
#include <stdlib.h>

void removerEspacos(char[], char[]);

int main(void){
	char frase[100];
	char fraseSemEspaco[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	removerEspacos(frase, fraseSemEspaco);
	
	printf("Resultado:\n");
	puts(fraseSemEspaco);
	
	
	system("pause");
	return 0;
}

void removerEspacos(char frase[], char fraseSemEspaco[]){
	int j = 0;
	for(int i = 0; frase[i] != '\0'; ++i){
		if(frase[i] != 32){
			fraseSemEspaco[j] = frase[i];
			j++;
		}
	}
	fraseSemEspaco[j] = '\0';
}
