/*
Leia uma matriz 5×5 e crie um procedimento booleano para determinar se ela é esparsa 
(ou seja, mais da metade dos elementos são zero).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 5
#define colunas 5

bool esparsa(int[linhas][colunas]);

int main(void) {
	srand(time(NULL));
	int matriz[linhas][colunas];
	/*
	matriz esparsa: 
	int matriz[linhas][colunas] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
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
	
	if(esparsa(matriz)){
		printf("A matriz eh esparsa.\n");
	} else {
		printf("A matriz NAO eh esparsa\n");
	}

	system("pause");
	return 0;
}

bool esparsa(int matriz[linhas][colunas]){
	bool esparsa = false;
	int metadeElementos = (linhas * colunas) / 2;
	int qtdZeros = 0;
	
	for(int lin = 0; lin < linhas; lin++) {
		for(int col = 0; col < colunas; col++) {
			if(matriz[lin][col] == 0)
				qtdZeros++;
		}
	}
	
	if(qtdZeros > metadeElementos) {
		esparsa = true;
	}
	
	return esparsa;
}



