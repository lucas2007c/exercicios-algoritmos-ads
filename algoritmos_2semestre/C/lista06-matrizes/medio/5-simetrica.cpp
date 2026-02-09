/*
Leia uma matriz quadrada 3×3 e implemente uma função booleana que determina se ela é simétrica 
(ou seja, se A[i][j] == A[j][i]). Exiba a matriz e a resposta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 3
#define colunas 3

bool simetrica(int[linhas][colunas]);

int main(void) {
	srand(time(NULL));
	int matriz[linhas][colunas];
	/*
	matriz simetrica:
	int matriz[linhas][colunas] = { {2, 5, 3} , {5, 4, 6} , {3, 6, 1} };
	*/

	printf("Matriz: \n");
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	if(simetrica(matriz)){
		printf("A matriz eh simetrica.\n");
	} else {
		printf("A matriz NAO eh simetrica\n");
	}

	system("pause");
	return 0;
}

bool simetrica(int matriz[linhas][colunas]){
	bool simetrica = true;
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			if(matriz[lin][col] != matriz[col][lin]){
				simetrica = false;
			}
		}
	}
	return simetrica;
}



