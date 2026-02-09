/*
Leia uma matriz 8×3 e exiba a soma dos elementos de cada coluna.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 8
#define qtd_colunas 3

void somaColunas(int[qtd_linhas][qtd_colunas], int[]);

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	int somas[qtd_colunas];
	
	printf("Matriz: \n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
		}
	}
	
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			printf("%d\t", matriz[lin][col]);
		}
		printf("\n");
	}
	
	somaColunas(matriz, somas);
	
	printf("-- SOMAS --\n");
	for(int i = 0; i < qtd_colunas; i++){
		printf("%d\t", somas[i]);
	}
	
	system("pause");
	return 0;
}

void somaColunas(int matriz[qtd_linhas][qtd_colunas], int somas[]){
	int soma;
	for(int col = 0; col < qtd_colunas; col++){
		soma = 0;
		for(int lin = 0; lin < qtd_linhas; lin++){
			soma += matriz[lin][col];
		}
		somas[col] = soma;
	}
}



