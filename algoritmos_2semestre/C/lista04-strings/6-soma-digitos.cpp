/*
Leia uma string que contenha números (ex: "a1b3c5") e some apenas os dígitos, exibindo o resultado final (ex: 1+3+5=9).
*/

#include <stdio.h>
#include <stdlib.h>

int somaDigitos(char[]);

int main(void){
	char frase[100];
	int totalDigitos = 0;
	
	printf("Digite uma frase com digitos: ");
	gets(frase);
	
	totalDigitos = somaDigitos(frase);
	
	printf("\nA soma dos digitos da frase eh: %d\n", totalDigitos);
	
	system("pause");
	return 0;
}

int somaDigitos(char frase[]){
	int soma = 0;
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] >= 48 && frase[i] <= 57){
			char c = frase[i];
			soma += atoi(&c);
		}
	}
	return soma;
}
