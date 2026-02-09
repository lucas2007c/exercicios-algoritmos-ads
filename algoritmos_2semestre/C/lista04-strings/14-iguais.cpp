/*
Leia duas strings e verifique se são iguais desconsiderando maiúsculas/minúsculas (sem usar strcasecmp()).
*/

#include <stdio.h>
#include <stdlib.h>

bool saoIguais(char[], char[]);

int main(void){
	char palavra1[100];
	char palavra2[100];
	bool iguais;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra1);
	
	printf("Digite outra palavra: ");
	scanf(" %s", palavra2);
	
	iguais = saoIguais(palavra1, palavra2);
	
	if(iguais){
		printf("As palavras sao iguais\n");
	} else {
		printf("As palavras nao sao iguais\n");
	}
	
	
	system("pause");
	return 0;
}

bool saoIguais(char palavra1[], char palavra2[]){
	bool iguais = true;
	for(int i = 0; palavra1[i] != '\0'; i++){
		if(palavra1[i] >= 65 && palavra1[i] <= 90){
			palavra1[i] = palavra1[i] + 32;
		}
		if(palavra2[i] >= 65 && palavra2[i] <= 90){
			palavra2[i] = palavra2[i] + 32;
		}
		if(palavra1[i] != palavra2[i]){
			iguais = false;
		}	
	}
	
	return iguais;
}
