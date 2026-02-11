/*
Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.
a) Crie uma função que recebe por parâmetro a quantidade e a soma dos valores lidos e retorna a média aritmética desses valores.
*/


#include <stdio.h>
#include <stdlib.h>

float media(int, int);

int main(void) {
	int num, soma, qtd = 0;
	do{
		printf("\n\nDigite um numero: ");
		scanf("%d", &num);
		if(num > 0){
			soma += num;
			qtd++;	
		}	
	} while (num > 0);
	
	printf("\n\nA media eh: %0.0f\n", media(soma, qtd));
	
	system("pause");
	return 0;
}

float media(int soma, int quantidade){
	float resultado = (float)soma/quantidade;
	return resultado;
}
