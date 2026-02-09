/*
Leia uma frase e exiba apenas a primeira palavra (até o primeiro espaço).
*/

#include <stdio.h>
#include <stdlib.h>

void exibirAteEspaco(char[]);

int main(void){
	char frase[100];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	exibirAteEspaco(frase);
	
	system("pause");
	return 0;
}

void exibirAteEspaco(char frase[]){
	int j = 0;
	char fraseAteEspaco[100];
	for(int i = 0; frase[i] != 32; i++){
			fraseAteEspaco[j] = frase[i];
			j++;
	}
	fraseAteEspaco[j] = '\0';
	puts(fraseAteEspaco);
}
