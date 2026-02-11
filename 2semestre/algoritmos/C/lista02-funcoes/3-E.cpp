/*
3- Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E. ( E = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + (1 / N!) )
a) Crie uma função chamada E que recebe o valor de N por parâmetro e retorna o valor de E conforme a equação acima
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int);
double E(int);

int main(void){
	int num = 0;
	printf("Digite o numero para calcular E: ");
	scanf("%d", &num);
	
	printf("E(%d) = %lf\n", num, E(num));
	
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

double E(int n){
	double e = 1;
	for(int i = 1; i <= n; i++){
		e += (double)1 / fatorial(i);
	}
	return e;
}
