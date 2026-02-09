/*
Leia uma matriz N×M e um número. Informe a posição (linha e coluna) onde ele aparece (N, M e o número são 
informados pelo usuário).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int linhas;
	int colunas;
	int num;
	int numLin, numCol;
	
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &linhas);
	
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);

	int matriz[linhas][colunas];
	
	for(int lin = 0; lin < linhas; lin++){
		for(int col = 0; col < colunas; col++){
			matriz[lin][col] = rand() % 10;
				// 2 = numero de espaços antes da variavel
			printf("%2d", matriz[lin][col]);
		}
		printf("\n");
	}
	
	printf("\nDigite um numero para descobrir sua posicao: ");
	scanf("%d", &num);
	
	//achando o indice
	for(int lin = 0; lin < linhas; lin++){
		for(int col = 0; col < colunas; col++){
			if(matriz[lin][col] == num){
				numLin = lin;
				numCol = col;
																// para verificar se está correto
				printf("O numero %d esta no indice [%d][%d]\n", matriz[numLin][numCol], numLin, numCol);
			}
		}
	}
		
	system("pause");
	return 0;
}





