/*
Leia um arquivo de texto e exiba na tela quantas linhas ele possui.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
	FILE *arquivo;
	char path[100] = "arquivos/qts_linhas.txt";
	srand(time(NULL));
	
	arquivo = fopen(path, "w");
	if(arquivo == NULL){
		printf("Erro ao criar/abrir arquivo.");
		return 1;
	}
	
	int n = (rand() % 30) + 1;
	for(int i = 0; i < n; i++){
		fprintf(arquivo, "%d\n", i + 1);
	}
	
	fclose(arquivo);
	
	arquivo = fopen(path, "r");
	if(arquivo == NULL){
		printf("Erro ao criar/abrir arquivo.");
		return 1;
	}
	
	char numeroConvertido[10];
	int x = 0;
	while((fgets(numeroConvertido, sizeof(numeroConvertido), arquivo)) != NULL){
		x++;
	}
	
	printf("O arquivo tem %d paginas\n", x);
	
	fclose(arquivo);
	
	system("pause");
	return 0;
}
