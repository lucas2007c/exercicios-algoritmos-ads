/*
Crie um vetor com N n�meros reais (pergunte o valor de N ao usu�rio). Crie uma fun��o que calcula e retorna a m�dia 
aritm�tica entre os n�meros do vetor. Exiba o vetor e a m�dia.
*/

#include <stdio.h>
#include <stdlib.h>

void ler(float[], int N);
float calcularMedia(float[], int);

int main(void) {
	int N = 10;
	float vet[N];

	ler(vet, N);
	
	printf("Vetor: ");
	for(int i = 0; i < N; i++) {
		printf("%0.1f ", vet[i]);
	}
	printf("\nA media eh: %0.1f\n", calcularMedia(vet, N));

	system("pause");
	return 0;
}

void ler(float vet[], int N) {
	float num ;
	for(int i = 0; i < N; i++) {
		printf("%d-Digite um numero: ", i + 1);
		scanf("%f", &num);
		vet[i] = num;
	}
}

float calcularMedia(float vet[], int N) {
	int soma = 0;

	for(int i = 0; i < N; i++) {
		soma += vet[i];
	}
	
	return soma / (float)N;
}
