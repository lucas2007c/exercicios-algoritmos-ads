/*
Leia uma matriz 8×5 e mostre a soma de todos os seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 8
#define qtd_colunas 5

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	int soma;

	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
			soma += matriz[lin][col];
		}
	}
	
	printf("Matriz: \n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	printf("Soma: %d\n", soma);
	
	system("pause");
	return 0;
}
