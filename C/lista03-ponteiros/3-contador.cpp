/*Crie um programa que:
Implementa uma fun��o que incrementa um contador passado por refer�ncia com o passo passado por valor. void contador(int *contador, int passo);
No main, use la�os de repeti��o para chamar essa fun��o v�rias vezes alterando o valor do passo.
*/

#include <stdio.h>
#include <stdlib.h>

void cont(int*, int);

int main(void){
	int repeticoes, contador, passo = 0;
	printf("Digite a quantidade de repeticoes: ");
	scanf("%d", &repeticoes);
	
	for(int i = 0; i < repeticoes; i++){
		printf("\nDigite o passo: ");
		scanf("%d", &passo);
			
		cont(&contador, passo);
	}
}

void cont(int *contador, int passo){
	printf("Digite o contador: ");
	scanf("%d", contador);
	
	for(int i = 0; i <= *contador; i += passo){
		printf("%d\n", i);
	}
}

