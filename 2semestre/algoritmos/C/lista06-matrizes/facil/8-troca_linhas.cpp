/*
Leia uma matriz 7×7, mostre a matriz lida, troque a primeira linha com a última, mostre a matriz lida novamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtd_linhas 7
#define qtd_colunas 7

int main(void){
	srand(time(NULL));
	int matriz[qtd_linhas][qtd_colunas];
	int temp[qtd_colunas];
	
	printf("Matriz: \n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			if(lin == 0){
				temp[col] = matriz[lin][col];
				matriz[lin][col] = matriz[qtd_linhas -1][col];
			}
			
			if(lin == qtd_linhas - 1){
				matriz[lin][col] = temp[col];
			}
		}
	}
	
	printf("\nMatriz com primeira e segunda coluna trocada:\n");
	for(int lin = 0; lin < qtd_linhas; lin++){
		for(int col = 0; col < qtd_colunas; col++){
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


