/*
Crie uma fun��o booleana chamada palindromo(char[]) que recebe uma palavra e verifica se ela � um pal�ndromo (lida de tr�s para frente � igual), 
a fun��o deve retornar true se sim e false se n�o.
*/

#include <stdio.h>
#include <stdlib.h>

int length(char[]);
bool palindromo(char[]);

int main(void){
	char palavra[50];
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	if(palindromo(palavra) == 1){
		printf("A palavra EH um palindromo\n");
	} else {
		printf("A palavra NAO eh um palindromo\n");
	}
	
	system("pause");
	return 0;
}

int length(char palavra[]){
	int length = 0;
	for(int i = 0; palavra[i] != '\0'; i++){
		length++;
	}
	return length;
}

bool palindromo(char palavra[]){
	int limite = length(palavra);
	
	for(int i = 0, j = limite - 1; i < j; i++, j--){
		if(palavra[i] != palavra[j]){
			return false;
		}
	}
	return true;
}
