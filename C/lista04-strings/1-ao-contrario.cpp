// Escreva um programa que leia uma palavra e a imprima invertida (ex: casa ? asac).

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char palavra[50];
	
	printf("Digite a palavra:");
	gets(palavra);
	
	int i = 0;
	// coloco o i no ultimo indice em que possui um caracter
	// + 1 porque quer dizer que o proximo espaço nao possui nada
	//ex: o[0] l[1] a[2] '\0'[3 + 1]
	while(palavra[i + 1] != '\0'){
		i++;
	}	
	
	// exibe a mensagem
	while(i >= 0){
		printf("%c", palavra[i]);
		i--;
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}

