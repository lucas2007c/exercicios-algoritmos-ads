/*
Crie o procedimento paraMaiusculas(char[]) que transforma todas as letras minúsculas em maiúsculas sem usar strupr(), alterando os caracteres manualmente. Teste-a.
*/

#include <stdio.h>
#include <stdlib.h>

void paraMaiusculas(char[]);

int main(void){
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	paraMaiusculas(frase);
	
	printf("\nFRASE EM MAISCULO:\n");
	puts(frase);
	
	system("pause");
	return 0;
}

void paraMaiusculas(char frase[]){
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] >= 97 && frase[i] <= 122){
			frase[i] = frase[i] - 32;
		}
	}
}
