/*
Leia uma matriz N×N, mostre a matriz e informe o maior valor contido nela (N deve ser informado pelo usuário).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int N;
	int maior;
	
	printf("Digite um numero para gerar a matriz NxN: ");
	scanf("%d", &N);
	
	int matriz[N][N];
	
	printf("Matriz: \n");
	for(int lin = 0; lin < N; lin++){
		for(int col = 0; col < N; col++){
			matriz[lin][col] = rand() % 100;
			printf("%d\t", matriz[lin][col]);
	
			if(matriz[lin][col] > maior){
				maior = matriz[lin][col];
			}
		}
		printf("\n");
	}
	
	printf("\nO maior numero eh: %d\n", maior);
	system("pause");
	return 0;
}




