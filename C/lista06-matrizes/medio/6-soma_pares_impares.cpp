/*
Leia uma matriz 4×4 e exiba a soma dos elementos das linhas pares e das colunas ímpares. Exiba a matriz e o 
resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 4
#define colunas 4

int main(void) {
	srand(time(NULL));
	int matriz[linhas][colunas];
	int soma = 0;

	printf("Matriz: \n");
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			if(lin % 2 == 0) {
				soma += matriz[lin][col];
			}	
			
			if(col % 2 == 1){
				soma += matriz[lin][col];
			}
		}
	}
	
	printf("Soma: %d\n", soma);
	
	/*
	   0  1  2  3	
	0 [1][2][3][4]
	1 [5][6][7][8]
	2 [9][0][1][2]
	3 [3][4][5][6]
	*/

	system("pause");
	return 0;
}



