/*
Crie uma struct Jogo com nome do timeA, timeB e gols de cada. Leia 5 jogos e mostre os placares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct Time {
	char nome[50];
	int pontos;
};

struct Jogo {
	Time timeA;
	Time timeB;
};

int main(void) {
	srand(time(NULL));

	struct Time timeA;
	struct Time timeB;
	struct Jogo jogo;

	for(int i = 1; i <= N; i++) {
		printf("\t--- Jogo %d ---\n", i);
		printf("Digite o nome do time A: ");
		gets(jogo.timeA.nome);
		jogo.timeA.pontos = rand() % 11;

		printf("Digite o nome do time B: ");
		gets(jogo.timeB.nome);
		jogo.timeB.pontos = rand() % 11;
		
		printf("\n\t--- Placar ---\n");
		printf("%s %d x %d %s\n\n", jogo.timeA.nome, jogo.timeA.pontos, jogo.timeB.pontos, jogo.timeB.nome);
	}

	system("pause");
	return 0;
}




