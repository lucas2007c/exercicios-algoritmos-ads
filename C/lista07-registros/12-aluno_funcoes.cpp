/*
Crie uma struct Aluno com nome, matrícula e vetor de 4 notas. Use funções para ler, exibir e calcular média.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_NOTAS 4

struct Aluno {
	char nome[50];
	char matricula[11];
	float notas[QTD_NOTAS];
	float media;
};

Aluno ler();
void exibir(Aluno *aluno);
float calcularMedia(float notas[]);

int main(void) {
	struct Aluno aluno = ler();
	
	aluno.media = calcularMedia(aluno.notas);
	
	exibir(&aluno);
		
	system("pause");
	return 0;
}

Aluno ler(){
	struct Aluno aluno;
	printf("Digite o nome do aluno: ");
	gets(aluno.nome);
	
	printf("Digite a matricula do aluno: ");
	gets(aluno.matricula);
	
	for(int i = 0; i < QTD_NOTAS; i++){
		printf("Digite a %d nota: ", i + 1);
		scanf("%f", &aluno.notas[i]);
	}
	
	return aluno;
}

void exibir(Aluno *aluno){
	printf("\nNome: %s\nmatricula: %s\nNotas: ", (*aluno).nome, (*aluno).matricula);
	for(int i = 0; i < QTD_NOTAS; i++){
		printf("%0.1f ", (*aluno).notas[i]);
		if(i < QTD_NOTAS - 1)
			printf("- ");
	}
	printf("\nMedia: %0.1f\n", (*aluno).media);
}

float calcularMedia(float *notas){
	float soma;
	
	for(int i = 0; i < QTD_NOTAS; i++){
		soma += notas[i];
	}
	
	return soma / QTD_NOTAS;
}












