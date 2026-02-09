/*
Leia 12 números e armazene-os em um vetor. Crie um procedimento que mostre quantos são pares e quantos são ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

void ler(int[], int N);
void qtdParImpar(int[], int);

int main(void) {
	int N = 12;
	int vet[N];

	ler(vet, N);
	qtdParImpar(vet, N);

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

void qtdParImpar(int vet[], int N) {
	int qtdPar = 0;
	int qtdImpar = 0;

	for(int i = 0; i < N; i++) {
		if(vet[i] % 2 == 0) {
			qtdPar++;
		} else {
			qtdImpar++;
		}
	}

	printf("Quantidade de pares: %d\n", qtdPar);
	printf("Quantidade de impares: %d\n", qtdImpar);
}
