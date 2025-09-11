/*
Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.
a) Crie um procedimento que recebe por parâmetro o valor lido e exibe a tabela conforme solicitado
b) Crie uma função "Fatorial" que recebe um valor inteiro e retorna seu fatorial (essa função será utilizada no item a)
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int);


int main(void) {
	int lidos, num = 0;

	printf("Digite quantos numeros vao ser lidos: ");
	scanf("%d", &lidos);

	for(int i = 0; i < lidos; i++) {
		printf("\n\nDigite o numero para calcular o fatorial: ");
		scanf("%d", &num);
		
		printf("\n %d! = %d\n", num, fatorial(num));
	}

	system("pause");
	return 0;
}

int fatorial(int n){
	int f = 1;
	for(int i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}
