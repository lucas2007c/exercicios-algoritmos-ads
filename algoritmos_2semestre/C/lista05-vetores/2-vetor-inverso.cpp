/*
Ler um vetor de 10 elementos. Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, o último 
elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Crie um procedimento que recebe 
os 2 vetores por parâmetro e os exibe na tela da seguinte forma:
Considere o vetor 1 com os valores 2,4,6,8,10 e o vetor 2 com os valores 10,8,6,4,2 a saída deve ser:
2 10
4 8
6 6
8 4
10 2
*/

#include <stdio.h>
#include <stdlib.h>

void ler10(int[], int[], int);
void exibe(int[], int[], int);

int main(void){
	int N = 10;
	int vetor[N];
	int inverso[N];
	
	ler10(vetor, inverso, N);
	exibe(vetor, inverso, N);
	
	system("pause");
	return 0;
}

void ler10(int vetor[], int inverso[], int N){
	int num;
	for(int i = 0, j = N-1; i < N; i++, j--){
		printf("%d-Digite um numero: ", i + 1);
//		vetor[i] = rand() % 11;
		scanf("%d", &num);
		vetor[i] = num;
		
		inverso[j] = vetor[i];
	}
}

void exibe(int vetor[], int inverso[], int N){
	for(int i = 0; i < N; i++){
		printf("%d %d\n", vetor[i], inverso[i]);		
	}
}
