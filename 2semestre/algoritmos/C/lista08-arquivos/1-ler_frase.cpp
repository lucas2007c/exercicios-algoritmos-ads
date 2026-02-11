/*
Escreva um programa que cria um arquivo chamado mensagem.txt. O arquivo deve ser aberto em modo escrita ("w") e
depois fechado corretamente. Verifique se o arquivo apareceu na mesma pasta em que está salvo o código fonte de seu
programa. Peça ao usuário para digitar uma frase, abra o arquivo e salve essa frase nele. Agora, abra o arquivo para
leitura, leia o conteúdo dele e exiba o texto na tela.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *arquivo;
	char mensagem[100];
	char path[100] = "arquivos/mensagem.txt";

	arquivo = fopen(path, "w");
	if(arquivo == NULL) {
		printf("Erro criar arquivo.\n");
		return 1;
	}

	printf("Digite uma frase para ser guardada no arquivo: ");
	gets(mensagem);

	fprintf(arquivo, mensagem);
	printf("Mensagem guardada.\n\n");
	fclose(arquivo);


	arquivo = fopen(path, "r");
	strcpy(mensagem, "tendo certeza que pegou do arquivo");
	printf("Lendo a mensagem...\n\n");

	fgets(mensagem, sizeof(mensagem), arquivo);

	printf("Sua mensagem no arquivo:\n%s\n", mensagem);

	fclose(arquivo);




	system("pause");
	return 0;
}
