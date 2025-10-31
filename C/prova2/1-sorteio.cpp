#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
	O programa abaixo gera um vetor que cont?m 20 nomes e um vetor que ir? conter a ordem de um sorteio entre os nomes
	Implemente a fun??o sortear que ao final deve inserir valores exclusivos entre 1 e 20 (n?o pode haver n?meros repetidos)
	* note que o vetor sorteio armazena uma lista de ?ndices aleat?rios referentes ao vetor com os nomes a serem sorteados
	* estude o procedimento exibe para entender esse funcionamento.
*/

void exibe(char nomes[20][20], int sorteio[20]);
void sortear(int sorteio[20]);

int main() {
	char nomes[20][20] = { "Ana", "Beatriz", "Bianca", "Caio", "Camila", "Clara", "Eduardo", "Felipe", "Gabriel", "Gabriela", "Gustavo", "Henrique", "Isabela", "Joao", "Julia", "Laura", "Leonardo", "Leticia", "Lucas", "Luiza"};
	int sorteio[20];

	sortear(sorteio);

	exibe(nomes, sorteio);

	system("pause");

	return 0;
}

bool includes(int vetor[], int tamanho, int num) {
	int include = false;
	
	for(int i = 0; i < tamanho; i++) {
		if(vetor[i] == num) {
			include = true;
			break;
		}
	}
	return include;
}

void sortear(int sorteio[20]) {
	srand(time(NULL));
	for(int i = 0; i < 20; i++) {
		sorteio[i] = -1;
	}
	
	int i = 0;
	while(i < 20) {
		sorteio[i] = rand() % 20;
		if(!includes(sorteio, i, sorteio[i])){
			i++;
		}
	}
}

void exibe(char nomes[20][20], int sorteio[20]) {
	printf("Sorteio:\n");
	for(int i=0; i<20; i++) {
		printf("%d - %s\n",(i+1),nomes[sorteio[i]]);
	}
}

