/*
Peça ao usuário que digite 5 números inteiros e grave-os em um arquivo numeros.txt, um por linha.
Leia o arquivo numeros.txt e mostre todos os valores na tela.


*/
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	FILE *arquivo;
	char path[100] = "arquivos/numeros.txt";
	int numero;
	char numeroConvertido[10];
	
	arquivo = fopen(path, "w+");
	if(arquivo == NULL){
		printf("Erro ao criar/ler arquivo.");
		return 1;
	}
	
	for(int i = 0; i < 5; i++){
		printf("Digite um numero para adicionar ao arquivo: ");
		scanf("%d", &numero);
		
		sprintf(numeroConvertido, "%d", numero);
		fputs(numeroConvertido, arquivo);
		if(i != 4)
			fputs("\n", arquivo);
		printf("\n");
	}
	
	//Volta para o inicio do arquivo para leitura
	fseek(arquivo,0,SEEK_SET);
	
	
	printf("Conteudo no arquivo:\n--------------------------------\n");
	for(int i = 0; i < 5; i++){
		fgets(numeroConvertido, sizeof(numeroConvertido), arquivo);
		printf("Linha %d: %s\n", i + 1, numeroConvertido);
	}
	printf("--------------------------------\n");
	fclose(arquivo);
	
	system("pause");
	return 0;
}
