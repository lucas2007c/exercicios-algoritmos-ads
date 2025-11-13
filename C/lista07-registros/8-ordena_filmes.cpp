/*
Crie uma struct Filme com título e ano. Armazene 5 filmes em um vetor. Ordene o vetor de filmes pelo ano de
lançamento. Exiba os filmes na nova ordem. (método de ordenação, clique aqui).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct Filme {
	char titulo[50];
	int ano;
};

void exibir(Filme filmes[]);
void ordenar(Filme filmes[]);

int main(void) {
	srand(time(NULL));

	struct Filme filmes[N];

	for(int i = 0; i < N; i++) {
		printf("%d - Digite o nome do filme: ", i + 1);
		gets(filmes[i].titulo);

		printf("Ano de lancamento: ");
		filmes[i].ano = (rand() % 26) + 2000;
		printf("%d\n\n", filmes[i].ano);
	}

	printf("--- Filmes ---\n\n");
	exibir(filmes);

	ordenar(filmes);

	printf("\n--- Filmes ordenados ---\n\n");
	exibir(filmes);

	system("pause");
	return 0;
}

void exibir(Filme filmes[]) {
	for(int i = 0; i < N; i++)
		printf("%d - %s, %d\n", i + 1, filmes[i].titulo, filmes[i].ano);
}

void ordenar(Filme filmes[]) {
	bool ordenado = false;

	while(!ordenado) {
		for(int i = 0; i < N - 1; i++) {
			if((filmes[i].ano > filmes[i + 1].ano)) {
				Filme temp = filmes[i];
				filmes[i] = filmes[i + 1];
				filmes[i + 1] = temp;
			}
		}

		for(int i = 0; i < N; i++) {
			if(filmes[i].ano > filmes[i + 1].ano) {
				break;
			}

			ordenado = true;
		}
	}
}











