// Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.
#include <stdio.h>
#include <stdlib.h>

int fat(int);

int main (void){
	int lidos, num = 0;
	
	printf("Digite quantos numeros vao ser lidos: ");
	scanf("%d", &lidos);
	
	for(int i = 0; i < lidos; i++){
		printf("\n");
		printf("Digite o numero para descobrir o fatorial: ");
		scanf("%d", &num);
		printf("O fatorial de %d eh %d\n", num, fat(num));
	}
		
	system("pause");
	return 0;
}

int fat(int n){
	int f = 1;
	for(int i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}
