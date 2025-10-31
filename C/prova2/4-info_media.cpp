#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	O programa abaixo gera uma matriz de 100x100 de inteiros e os inicializa com valores aleat?rios entre 1 e 99.
	Implemente a fun??o calculaMedia que retorna a m?dia dos valores da matriz
	Implemente o procedimento calculaInfo que exibe quantos valores est?o abaixo da m?dia, quantos valores possuem o valor igual a m?dia e quantos valores est?o acima da m?dia
*/

int calculaMedia(int matriz[100][100]);
void calculaInfo(int matriz[100][100], int media, int *abaixo, int *igual, int *acima);

int main() {
	int matriz[100][100];

	srand(time(NULL));

	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			matriz[i][j] = rand() % 99 + 1;
		}
	}

	int media = calculaMedia(matriz);

	int acima=0, abaixo=0, igual=0;

	calculaInfo(matriz, media, &abaixo, &igual,  &acima);

	printf("Media: %d\n",media);
	printf("Abaixo: %d\n",abaixo);
	printf("Igual: %d\n",igual);
	printf("Acima: %d\n",acima);

	return 0;
}

int calculaMedia(int matriz[100][100]) {
	int soma;
	int media;

	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			soma += matriz[i][j];
		}
	}
	return soma / 10000;
}

void calculaInfo(int matriz[100][100], int media, int *abaixo, int *igual, int *acima) {
	int num;
	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			num = matriz[i][j];
			if(num < media){
				*abaixo = *abaixo + 1;
			}
			
			if(num == media){
				*igual = *igual + 1;
			}
			
			if(num > media){
				*acima = *acima + 1;
			}
		}
	}
}
