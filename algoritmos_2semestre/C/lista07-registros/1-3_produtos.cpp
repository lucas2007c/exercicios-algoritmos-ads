/*
Defina uma struct Produto com nome e preço. Leia 3 produtos e imprima seus nomes.
*/

#include <stdio.h>
#include <stdlib.h>

struct Produto {
	char nome[50];
	float preco;
};

#define N 3

int main(void) {

	struct Produto produtos[N];

	for(int i = 0; i < N; i++) {
		printf("%d - Digite o nome do produto: ", i + 1);
		scanf("%s", produtos[i].nome);

		printf("%d - Digite o preco do produto: ", i + 1);
		scanf("%f", &produtos[i].preco);

		printf("\n");
	}

	for(int i = 0; i < N; i++) {
		printf("O nome do produto %d eh %s\n", i, produtos[i].nome);
	}

	system("pause");
	return 0;
}
