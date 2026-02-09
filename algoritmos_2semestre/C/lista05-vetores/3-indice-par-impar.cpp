/*
 Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma: os elementos de 
 índice par receberão os respectivos elementos divididos por 2; os elementos de índice ímpar receberão os 
 respectivos elementos multiplicados por 3. Imprima os dois vetores (usando o procedimento implementado no exercício 
 anterior).
*/

#include <stdio.h>
#include <stdlib.h>

void ler10(float[], float[], int);
void criarVetor2(float[], float[], int);
void exibe(float[], float[], int);

int main(void){
	int N = 10;
	float vetor[N];
	float vetor2[N];
	
	ler10(vetor, vetor2, N);
	criarVetor2(vetor, vetor2, N);
	exibe(vetor, vetor2, N);
	
	system("pause");
	return 0;
}

void ler10(float vetor[], float vetor2[], int N){
	int i = 0;
	int num;
	while(i < 10){
		printf("%d-Digite um numero inteiro e positivo: ", i + 1);
		scanf("%d", &num);
		if(num >= 0){
			vetor[i] = num;
			vetor2[i] = num;
			i++;
		} else {
			printf("Digite um numero positivo.\n");
		}
	}
}

void criarVetor2(float vetor[], float vetor2[], int N){
	for(int i = 0; i < N; i++){
		if(i % 2 == 0){
			vetor2[i] = vetor[i] / 2;
		} else {
			vetor2[i] = vetor[i] * 3;
		}
	}
}

void exibe(float vetor[], float vetor2[], int N){
	for(int i = 0; i < N; i++){
		printf("%0.0f  %0.1f\n", vetor[i], vetor2[i]);		
	}
}
