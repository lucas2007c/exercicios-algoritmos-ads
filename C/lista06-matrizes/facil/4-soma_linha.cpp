/*
Leia uma matriz 6×6 e exiba a soma dos elementos de cada linha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 6
#define qtd_colunas 6

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	int soma = 0;
	
	printf("Matriz: \n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
		}
	}
	
	for(int lin = 0; lin < qtd_linhas; lin++){
		soma = 0;
		for(int col = 0; col < qtd_colunas; col++){
			soma += matriz[lin][col];
			printf("%d ", matriz[lin][col]);
		}
		printf("= %d", soma);
		printf("\n");
	}
	
	system("pause");
	return 0;
}
