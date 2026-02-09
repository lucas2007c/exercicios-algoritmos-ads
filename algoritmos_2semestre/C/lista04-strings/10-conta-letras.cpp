/*
Crie um procedimento que recebe uma string por parâmetro e exibe quantas vezes cada letra do alfabeto aparece nela.
Exemplo:
Entrada: "banana"
Saída:
a: 3
b: 1
n: 2
*/

#include <stdio.h>
#include <stdlib.h>

void contarLetras(char[]);

int main(void){
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	contarLetras(frase);
	
	system("pause");
	return 0;
}

void contarLetras(char frase[]){
	int count = 0;
	for(int i = 97; i <= 122; i++){
		
		for(int j = 0; frase[j] != '\0'; j++){
			if(frase[j] == i || frase[j] == i - 32){
				count++;
			}
		}
		
		if(count > 0){
			printf("%c: %d\n", i, count);	
		}
		count = 0;
	}
}
