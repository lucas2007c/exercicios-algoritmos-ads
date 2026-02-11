/*
Faça um programa que lê 10 números inteiros do teclado e armazene em um vetor. Ao final imprima o vetor armazenado 
nos dois sentidos (do início para o fim e do fim para o início.
*/

#include <stdio.h>
#include <stdlib.h>

void ler10(int[], int);
void exibe(int[], int);

int main(void){
	int N = 10;
	int vetor[N];
	
	ler10(vetor, N);
	exibe(vetor, N);
	
	system("pause");
	return 0;
}

void ler10(int vetor[], int N){
	int num;
	
	for(int i = 0; i < N; i++){
		printf("%d-Digite um numero: ", i + 1);
		scanf("%d", &num);
		vetor[i] = num;	
	}
}

void exibe(int vetor[], int N){
	printf("Numeros na ordem certa:\n");
	for(int i = 0; i < N; i++){
		printf("%d\n", vetor[i]);
	}
	
	printf("\nNumeros na ordem inversa:\n");
	for(int j = N - 1; j >= 0; j--){
		printf("%d\n", vetor[j]);
	}
}
