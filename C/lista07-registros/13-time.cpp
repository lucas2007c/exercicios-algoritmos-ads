/*
Crie uma struct Time contendo nome, número de jogadores e um vetor de jogadores. Cada jogador tem nome e posição. 
Leia e imprima um relatório completo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define QTD_JOGADORES 11

struct Jogador {
	char nome[50];
	char posicao[20];
};

struct Time {
	char nome[50];
	int qtdJogadores;
	Jogador jogadores[QTD_JOGADORES];
};

int main(void) {
	srand(time(NULL));
	char nomes[10][20] = {"Joao", "Carlos", "Lucas", "Rafael", "Pedro", "Marcos", "Gustavo", "Felipe", "Andre", "Bruno"};
    char sobrenomes[10][20] = {"Silva", "Souza", "Oliveira", "Pereira", "Santos", "Costa", "Lima", "Almeida", "Goncalves", "Rocha"};
    char posicoes[10][20] = {"Goleiro", "Zagueiro", "Lateral", "Volante", "Meia", "Atacante", "Pivo", "Armador", "Ala", "Centroavante"};
	
	struct Time time;
	
	printf("Digite o nome do time: ");
	gets(time.nome);
	
	time.qtdJogadores = QTD_JOGADORES;
	
	for(int i = 0; i < QTD_JOGADORES; i++){
		int nomeIdx = rand() % 10;
		int sobrenomeIdx = rand() % 10;
		sprintf(time.jogadores[i].nome, "%s %s", nomes[nomeIdx], sobrenomes[sobrenomeIdx]);
		
		int posicaoIdx = rand() % 10;
		strcpy(time.jogadores[i].posicao, posicoes[posicaoIdx]);
	}
	
	printf("------------- Relatorio -------------\n");
	printf("Time: %s\n", time.nome);
	printf("Quantidade de jogadores: %d\nJogadores: \n", time.qtdJogadores);
	
	for(int i = 0; i < QTD_JOGADORES; i++){
		printf(" %d-%s %s\n", i +1, time.jogadores[i].posicao, time.jogadores[i].nome);
	}
	
	system("pause");
	return 0;
}










