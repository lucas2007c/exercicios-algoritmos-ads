/*
Leia uma matriz 4×4 e substitua os números pares por 0 e ímpares por 1. Exiba a matriz antes e depois.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 4
#define colunas 4

int main(void) {
	srand(time(NULL));
	int matriz[linhas][colunas];

	printf("Matriz: \n");
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}

	printf("\nMatriz alterada: \n");
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			if(matriz[lin][col] % 2 == 0) {
				matriz[lin][col] = 0;
			} else {
				matriz[lin][col] = 1;
			}
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}
