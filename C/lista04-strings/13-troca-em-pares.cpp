/*
Crie um procedimento troca(char[]*) que recebe uma palavra por referência e troca as posições dos caracteres em pares.
Exemplo:
Entrada: "abcd"
Saída: "badc"
*/

#include <stdio.h>
#include <stdlib.h>

void troca(char[]);

int main(void){
	char palavra[100];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	troca(palavra);
	
	puts(palavra);
	
	system("pause");
	return 0;
}

void troca(char palavra[]){
	int temp;
	for(int i = 0; palavra[i] != '\0'; i++){
		if(i % 2 == 1){
			temp = palavra[i];
			palavra[i] = palavra[i - 1];
			palavra[i - 1] = temp;
		}
	}
}

