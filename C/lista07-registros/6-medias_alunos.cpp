/*
Crie uma struct Aluno com nome e 3 notas. Leia 5 alunos, calcule a média de cada um e exiba.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define QTD_NOTAS 3

struct Aluno {
	char nome[50];
	float notas[3];
	float media;
};

int main(void) {
	srand(time(NULL));

	struct Aluno alunos[N];

	for(int i = 0; i < N; i++) {
		float soma = 0;
		printf("%d - Digite o nome do aluno: ", i + 1);
		gets(alunos[i].nome);

		for(int j = 0; j < QTD_NOTAS; j++) {
			printf("Digite a %da nota: ", j + 1);
			// scanf("%f", alunos[i].notas[j]);
			alunos[i].notas[j] = rand() % 11;
			printf("%0.1f\n", alunos[i].notas[j]);
			soma += alunos[i].notas[j];
		}

		alunos[i].media = soma / QTD_NOTAS;
		printf("\n");
	}

	for(int i = 0; i < N; i++) {
		printf("--- Aluno %d ---\n", i + 1);
		printf("Nome: %s\n",alunos[i].nome);
		printf("Notas: ");
		for(int j = 0; j < QTD_NOTAS; j++) {
			printf("%0.1f, ", alunos[i].notas[j]);
		}
		printf("\n");
		printf("Media: %0.1f\n", alunos[i].media);
		printf("%\n");
	}

	system("pause");
	return 0;
}
