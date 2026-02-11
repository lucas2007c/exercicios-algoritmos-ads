/*
Leia um vetor de 8 números inteiros e determine e exiba qual é o maior e o menor valor bem como os índices onde
eles se encontram .
*/

#include <stdio.h>
#include <stdlib.h>

void ler(int[], int N);
void maiorMenor(int[], int);

int main(void) {
	int N = 8;
	int vet[N];

	ler(vet, N);
	maiorMenor(vet, N);

	system("pause");
	return 0;
}

void ler(int vet[], int N) {
	int num ;
	for(int i = 0; i < N; i++) {
		printf("%d-Digite um numero: ", i + 1);
		scanf("%d", &num);
		vet[i] = num;
	}
}

void maiorMenor(int vet[], int N) {
	int maior = 0;
	int menor = 0;
	int indiceMaior = 0;
	int indiceMenor = 0;

	for(int i = 0; i < N; i++) {
		if(i == 0 || vet[i] > maior) {
			maior = vet[i];
			indiceMaior = i;
		}

		if(i == 0 || vet[i] < menor) {
			menor = vet[i];
			indiceMenor = i;
		}
	}

	printf("Maior: %d - Indice: %d\n", maior, indiceMaior);
	printf("Menor: %d - Indice: %d\n", menor, indiceMenor);
}
