// Crie um programa que l� dois n�meros e calcula o produto entre eles atrav�s de somas sucessivas (n�o usar *, somente +) !
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, num2, soma;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	for(int i = 0; i < num1; i++){
		soma += num2;
	};
	
	printf("%d * %d = %d\n", num1, num2, soma);
	
	system("pause");
	return 0;
}
