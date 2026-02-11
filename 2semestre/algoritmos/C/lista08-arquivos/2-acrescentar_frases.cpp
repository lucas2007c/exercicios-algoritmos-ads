/*
Crie agora um outro programa que sobrescreve o arquivo mensagem.txt com uma nova linha de texto digitada pelo 
usuário. Posteriormente, modifique seu código para abrir o arquivo em modo de acréscimo ("a") e adicionar novas 
linhas digitadas pelo usuário ao final do arquivo sem apagar o conteúdo anterior.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *arquivo;
	char mensagem[100];
	char path[100] = "arquivos/mensagem.txt";
	
	arquivo = fopen(path, "w");
	if(arquivo == NULL){
		printf("Erro ao criar/ler arquivo.");
		return 1;
	}
	
	printf("Digite uma mensagem: ");
	gets(mensagem);
	
	fputs(mensagem, arquivo);
	fputs("\n", arquivo);
	
	fclose(arquivo);
	
	arquivo = fopen(path, "a");
	if(arquivo == NULL){
		printf("Erro ao criar/ler arquivo.");
		return 1;
	}
	
	while(true){
		printf("\nDigite uma frase para adicionar ao arquivo('sair' para fechar): ");
		gets(mensagem);
		fputs("\n", arquivo);
		
		if(strcmp(mensagem, "sair") == 0)
			break;
		
		fputs(mensagem, arquivo);
	}
	fclose(arquivo);
	
	arquivo = fopen(path, "r");
	if(arquivo == NULL){
		printf("Erro ao criar/ler arquivo.");
		return 1;
	}
	
	printf("Conteudo no arquivo:\n--------------------------------\n");
	while(fgets(mensagem, sizeof(mensagem), arquivo) != NULL){
		printf("%s", mensagem);
	}
	printf("--------------------------------\n");
	
	fclose(arquivo);
	
	system("pause");
	return 0;
}
