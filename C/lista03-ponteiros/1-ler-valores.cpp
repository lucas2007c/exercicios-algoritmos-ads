/*
Crie um programa em C que:
declara 4 variáves (A, B, C e D) do tipo inteiro 
chama um procedimento chamado lerValores que recebe essas variáveis por referência (nesse procedimento, solicite ao usuário o valor das 4 variáveis)
agora, crie um procedimento chamado escreverValores que recebe essas variáveis por valor e as exibe na tela
*/

#include <stdio.h>
#include <stdlib.h>

void lerValores(int*, int*, int*, int*);
void escreverValores(int, int, int, int);

int main(void){
	int A, B, C, D = 0;
	
	printf("Digite os valores: ");
	lerValores(&A, &B, &C, &D);
	escreverValores(A, B, C, D);
	
	system("pause");
	return 0;
}

void lerValores(int* A, int* B, int* C, int* D){
	/*
	scanf("%d", A);
	scanf("%d", B);
	scanf("%d", C);
	scanf("%d", D);
	*/
	scanf("%d %d %d %d", A, B, C, D);
}

void escreverValores(int A, int B, int C, int D){
	printf("\n%d %d %d %d\n", A, B, C, D);	
}
