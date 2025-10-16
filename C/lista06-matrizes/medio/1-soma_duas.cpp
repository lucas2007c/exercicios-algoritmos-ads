/*
Leia duas matrizes N×N e gere uma terceira matriz que seja a soma das duas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void exibe(int[N][N]);

int main(void){
	srand(time(NULL));
	int matriz1[N][N];
	int matriz2[N][N];
	int matrizSoma[N][N];
	
	for(int lin = 0; lin < N; lin++){
		for(int col = 0; col < N; col++){
			matriz1[lin][col] = rand() % 10;
			matriz2[lin][col] = rand() % 10;
			
			matrizSoma[lin][col] = matriz1[lin][col] + matriz2[lin][col];
		}
	}
	
	printf("Matriz 1: \n");
	exibe(matriz1);
	
	printf("Matriz 2: \n");
	exibe(matriz2);
	
	printf("Matriz soma: \n");
	exibe(matrizSoma);
	
	system("pause");
	return 0;
}

void exibe(int matriz[N][N]){
	for(int lin = 0; lin < N; lin++){
		for(int col = 0; col < N; col++){
			printf("%d\t", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
}
