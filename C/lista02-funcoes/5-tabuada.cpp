/*
Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:

1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2
a) Crie um procedimento que recebe a variável n por parâmetro e exibe a tabuada de 1 a n conforme solicitado
*/

#include <stdio.h>
#include <stdlib.h>

void tabuada(int n);

int main(void){
	int num = 0;
	
	for(int i = 0; i < 20; i++){
		printf("\nDigite o numero para fazer a tabuada: ");
		scanf("%d", &num);
		tabuada(num);
	}
	
	system("pause");
	return 0;
}

void tabuada(int n){
	for(int i = 1; i <= n; i++){
		printf("\n%d x %d = %d", i, n, i * n);
	}
}
