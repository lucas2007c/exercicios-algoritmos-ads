/*
Crie o procedimento troca(char[], char, char) que recebe uma frase, o caractere de origem e o de destino e substitui 
todas as ocorrências do caractere de origem (ex: 'a') pelo caractere de destino (ex: '@'). Ex.: "A grama do vizinho e
sempre mais verde", origem 'e', destino 'X', resultado: "A grama do vizinho X sXmprX mais vXrdX". 
*/

#include <stdio.h>
#include <stdlib.h>

void troca(char[], char, char);

int main(void){
	char frase[100];
	char alvo;
	char substituto;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("Digite o caracter alvo: ");
	scanf(" %c", &alvo);
	
	printf("Digite o caracter substituto: ");
	scanf(" %c", &substituto);
	
	troca(frase, alvo, substituto);
	
	printf("\nResultado:\n");
	puts(frase);
	
	system("pause");
	return 0;
}

void troca(char frase[], char alvo, char substituto){
	for(int i = 0; frase[i] != '\0'; i++){
		if(frase[i] == alvo){
			frase[i] = substituto;
		}
	}
}
