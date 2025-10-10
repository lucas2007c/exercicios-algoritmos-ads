/*
Leia uma matriz 3×3 de números inteiros e exiba-a no formato de tabela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 3
#define qtd_colunas 3

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];

	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
		}
	}
	
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}	
	
	system("pause");
	return 0;
}
