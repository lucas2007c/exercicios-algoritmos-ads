/*
Crie uma struct Retângulo com largura e altura. Leia seus valores, crie uma função que recebe a struct como 
parâmetro, calcula e retorna a área. Teste a função mostrando o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Retangulo{
	int largura;
	int altura;
};

int calculaArea(Retangulo*);

int main(void) {
	srand(time(NULL));
	struct Retangulo retangulo;
	
	retangulo.altura = (rand() % 10) + 1;
	retangulo.largura = (rand() % 10) + 1;
	
	int area = calculaArea(&retangulo);
	
	printf("A area do retangulo de %dx%d eh %d\n", retangulo.altura, retangulo.largura, area);
	
	system("pause");
	return 0;
}


int calculaArea(Retangulo *retangulo){
	return (*retangulo).altura * (*retangulo).largura;
}


