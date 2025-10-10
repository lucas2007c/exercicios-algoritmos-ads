/*
Leia uma matriz quadrada 5×5 e mostre a matriz em formato de tabela e os elementos da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 5
#define qtd_colunas 5

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	
	printf("Matriz: \n");
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
	
	printf("\nDiagonal Principal: ");
	for(int i = 0; i < qtd_linhas; i++){
		printf("%d,", matriz[i][i]);
	}
	
	printf("\n\n");	
	
	system("pause");
	return 0;
}
