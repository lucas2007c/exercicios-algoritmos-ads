/*
Construir um algoritmo que calcule a m�dia aritm�tica de v�rios valores inteiros positivos, lidos externamente. O final da leitura acontecer� quando for lido um valor negativo.
a) Crie uma fun��o que recebe por par�metro a quantidade e a soma dos valores lidos e retorna a m�dia aritm�tica desses valores.
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
