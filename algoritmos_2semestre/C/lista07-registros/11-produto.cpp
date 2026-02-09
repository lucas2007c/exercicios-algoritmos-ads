/*
Crie uma struct Produto com nome, preço e quantidade em estoque. Mostre o valor total em estoque.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Produto {
	char nome[50];
	float preco;
	int estoque;
};

int main(void) {
	struct Produto produto;
	
	printf("Digite o nome do produto: ");
	gets(produto.nome);
	
	printf("Digite o preco do produto: ");
	scanf("%f", &produto.preco);
	
	printf("Digite a quantidade do produto em estoque: ");
	scanf("%d", &produto.estoque);
	
	printf("\nHa %0.2f reais em estoque.\n", produto.preco * (float)produto.estoque);

	system("pause");
	return 0;
}
