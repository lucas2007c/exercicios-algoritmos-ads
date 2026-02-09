/*
Leia uma matriz 4×4 e calcule separadamente a soma da diagonal principal e da secundária. Exiba a matriz e as somas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 4
#define colunas 4

int calculaPrincipal(int[linhas][colunas]);
int calculaSecundaria(int[linhas][colunas]);

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
	
	printf("\nSoma da diagonal principal: %d\n", calculaPrincipal(matriz));
	printf("Soma da diagonal secundaria: %d\n", calculaSecundaria(matriz));

	system("pause");
	return 0;
}

int calculaPrincipal(int matriz[linhas][colunas]){
	int soma = 0;
	for(int i = 0; i < linhas; i++){
		soma += matriz[i][i];
	}
	return soma;
}

int calculaSecundaria(int matriz[linhas][colunas]){
	int soma = 0;
	for(int i = 0; i < linhas; i++){
						// i ao inverso = 3, 2, 1, 0
		soma += matriz[i][linhas - 1 - i];
	}
	return soma;
}





