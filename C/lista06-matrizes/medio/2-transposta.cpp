/*
Leia uma matriz 3×2 e gere sua matriz transposta (2×3). (Procure o conceito matemático de matriz transposta)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 3
#define qtd_colunas 2

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	int transposta[qtd_colunas][qtd_linhas];
	
	printf("Matriz: \n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
			transposta[col][lin] = matriz[lin][col];
		}
		printf("\n");
	}
	
	/*0 1
	0[1][4]
	1[2][5]
	2[3][6]
	
	  0  1  2		
	0[1][2][3]
	1[4][5][6]
	*/
	
	printf("\nMatriz Transposta: \n");
	
	for(int col = 0; col < qtd_colunas; col++){
		for(int lin = 0; lin < qtd_linhas; lin++){
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	
	system("pause");
	return 0;
}
