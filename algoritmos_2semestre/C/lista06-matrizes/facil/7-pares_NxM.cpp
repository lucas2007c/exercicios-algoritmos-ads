/*
Leia uma matriz N×M, mostre a matriz e conte quantos números pares existem (N e M devem ser informados pelo usuário).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int N;
	int M;
	int qtdPares;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d", &N);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &M);
	
	int matriz[N][M];
	
	printf("\nMatriz: \n");
	for(int lin = 0; lin < N; lin++){
		for(int col = 0; col < M; col++){
			matriz[lin][col] = rand() % 10;
			printf("%d ", matriz[lin][col]);
	
			if(matriz[lin][col] % 2 == 0){
				qtdPares++;
			}
		}
		printf("\n");
	}
	
	printf("\nA quantidade de numeros pares eh: %d\n", qtdPares);
	system("pause");
	return 0;
}


