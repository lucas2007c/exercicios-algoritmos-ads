/*
Leia uma matriz quadrada 4×4 e gere outra que represente a rotação da original em 90° para a direita. Exiba as 
duas matrizes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 4
#define colunas 4

int main(void){
	srand(time(NULL));
	int matriz[linhas][colunas];
	int matriz2[linhas][colunas];
	
	/*
	[3,0][2,0][1,0][0,0]
	[3,1][2,1][1,1][0,1]
	[3,2][2,2][1,2][0,2]
	[3,3][2,3][1,3][0,3]
	*/
	printf("Matriz: \n");
	for(int lin = 0; lin < linhas; lin++){
		for(int col = 0; col < colunas; col++){
			matriz[lin][col] = rand() % 10;
			printf("%2d", matriz[lin][col]);
		}
		printf("\n");
	}
	
	printf("\nMatriz rotacionada 90 graus: \n");
	for(int lin = 0; lin < linhas; lin++){
		for(int col = 0; col < colunas; col++){
			matriz2[lin][col] = matriz[colunas - 1 - col][lin];
			printf("%2d", matriz2[lin][col]);
		}
		printf("\n");
	}
		
	system("pause");
	return 0;
}





