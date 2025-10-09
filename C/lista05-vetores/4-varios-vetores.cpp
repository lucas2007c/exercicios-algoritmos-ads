/*
Faça um programa que monta dois vetores de números inteiros com 20 números cada. Depois de montados, implemente um 
procedimento que gera um terceiro vetor formado pela diferença dos dois vetores lidos, um quarto vetor formado pela 
soma dos dois vetores lidos e por último um quinto vetor formado pela multiplicação dos dois vetores lidos. Exiba 
todos vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void montaVetores(int[], int[], int);
void gerarVetores(int[], int[], int[], int[], int[], int);
void exibe(int [], int);
void exibe(int[], int[], int[], int[], int[], int);

int main(void){
	int N = 20;
	int vetor1[N];
	int vetor2[N];
	int diferencas[N];
	int somas[N];
	int multiplicacoes[N];
	
	montaVetores(vetor1, vetor2, N);
	gerarVetores(vetor1, vetor2, diferencas, somas, multiplicacoes, N);
	exibe(vetor1, vetor2, diferencas, somas, multiplicacoes, N);
	
	system("pause");
	return 0;
}

void montaVetores(int vetor1[], int vetor2[], int N){
	srand(time(NULL));
	for(int i = 0; i < N; i++){
		vetor1[i] = rand() % 10;
		vetor2[i] = rand() % 10;
	}
	printf("\n");
}

void gerarVetores(int vetor1[], int vetor2[], int diferencas[], int somas[], int multiplicacoes[], int N){
	for(int i = 0; i < N; i++){
		if(vetor1[i] >= vetor2[i]){
			diferencas[i] = vetor1[i] - vetor2[i];
		} else {
			diferencas[i] = vetor2[i] - vetor1[i];
		}
		
		somas[i] = vetor1[i] + vetor2[i];
		multiplicacoes[i] = vetor1[i] * vetor2[i];
	}
}

void exibe(int vetor[], int N){
	for(int i = 0; i < N; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
}

void exibe(int vetor1[], int vetor2[], int diferencas[], int somas[], int multiplicacoes[], int N){
	printf(" Vet1\t vet2\t diff\t sum\t mult\t\n");
	for(int i = 0; i < N; i++){
		printf(" %d\t  %d\t  %d\t  %d\t  %d\t\n", vetor1[i], vetor2[i], diferencas[i], somas[i], multiplicacoes[i]);
	}
}







