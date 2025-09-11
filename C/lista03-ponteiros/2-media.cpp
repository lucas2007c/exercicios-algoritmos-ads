/*
Crie um programa que:
Fa�a uma fun��o que receba duas notas e retorne a m�dia por valor. float media(float n1, float n2);
Outra fun��o deve receber a m�dia e, por refer�ncia, retornar se o aluno est� aprovado (>= 6). void verificar_aprovacao(float media, int *aprovado); // 1 = aprovado, 0 = reprovado
Teste as fun��es no main
*/

#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float, float);
void verificarAprovacao(float, int*);

int main(void){
	float nota1, nota2 = 0, media;
	int aprovado = 0;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = calcularMedia(nota1, nota2);
	verificarAprovacao(media, &aprovado);
	
	printf("\nMedia: %0.1f", media);
	printf("\nAprovado: %d\n", aprovado);
	
	system("pause");
	return 0;
}

float calcularMedia(float nota1, float nota2){
	float media = (nota1 + nota2) / 2;
	return media;
}

void verificarAprovacao(float media, int *aprovado){
	if(media >= 6)
		*aprovado = 1;
}
