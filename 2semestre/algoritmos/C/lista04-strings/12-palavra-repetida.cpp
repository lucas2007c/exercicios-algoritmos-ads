/*
Leia uma palavra e um número inteiro n. Crie uma nova string repetindo a palavra n vezes.
Exemplo:
Entrada: "Oi", 3
Saída: "OiOiOi"
*/

#include <stdio.h>
#include <stdlib.h>

void repetePalavra(char[], int, char[]);

int main(void){
	char palavra[100];
	int repeticoes;
	char palavraRepetida[100];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	printf("Digite quantas vezes a palavra vai ser repetida: ");
	scanf("%d", &repeticoes);
	
	repetePalavra(palavra, repeticoes, palavraRepetida);

	puts(palavraRepetida);
	
	system("pause");
	return 0;
}

void repetePalavra(char palavra[], int repeticoes, char palavraRepetida[]){
	int k = 0;
	for(int i = 0; i < repeticoes; i++){
		for(int j = 0; palavra[j] != '\0'; j++){
			palavraRepetida[k] = palavra[j];
			k++;
		}
	}
}
