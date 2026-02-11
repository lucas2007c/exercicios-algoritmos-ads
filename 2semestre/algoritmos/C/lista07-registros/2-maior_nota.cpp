/*
Crie uma struct Aluno com nome e nota. Leia dois alunos e mostre qual tem maior nota.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 2

struct Aluno {
	char nome[50];
	float nota;
};

struct MaiorNota {
	int indice;
	float nota;
	bool iguais;
};

int main(void) {
	struct Aluno alunos[N];
	struct MaiorNota maiorNota ={0, 0, false};
	
	for(int i = 0; i < N; i++){
		printf("%d - Digite o nome do aluno: ", i + 1);
		scanf("%s", alunos[i].nome);

		printf("%d - Digite a nota do aluno: ", i + 1);
		scanf("%f", &alunos[i].nota);
		
		if(alunos[i].nota > maiorNota.nota){
			maiorNota.indice = i;
			maiorNota.nota = alunos[i].nota;
		}else if(alunos[i].nota == maiorNota.nota){
			maiorNota.iguais = true;
		}
		
		printf("\n");
	}
	
	if(!maiorNota.iguais){
		printf("O aluno com maior nota eh o %s\n", alunos[maiorNota.indice].nome);
	} else {
		printf("Ha alunos com notas iguais, mas a maior nota foi %0.1f\n", maiorNota.nota);
	}
	
	system("pause");
	return 0;
}
