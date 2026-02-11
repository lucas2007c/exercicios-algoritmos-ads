#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char texto[100];

    // Abrindo o arquivo para escrita ("w" cria ou sobrescreve, "a" adiciona no final de um arquivo existente ou cria um caso não exista)
    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    // Escrevendo no arquivo
    fprintf(arquivo, "Ola, mundo!\n");
    fprintf(arquivo, "Este e um exemplo de arquivo em C.\n");
    fprintf(arquivo, "Cada linha foi gravada com fprintf().\n");
    fputs("Mas tambem pode ser gravada com fputs().\n", arquivo);

    fclose(arquivo); // fecha o arquivo

    // Abrindo o arquivo para leitura ("r") ("r+", "w+" e "a+" abre o arquivo para escrita e leitura
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    // Lendo (uma linha por vez) e escrevendo o conteúdo do arquivo
    printf("Conteudo do arquivo:\n");
    printf("---------------------\n");
    
    int x = 1;
    
    fscanf(arquivo, "%s",texto); // posso ler usando o fscanf, mas esse lê somente até encontrar um espaço :(
    printf("%d %s\n",x,texto);
    x++;
    // ou usando o fgets
	while (fgets(texto, sizeof(texto), arquivo) != NULL) {
		printf("%d %s", x, texto);
		x++;
    }

    fclose(arquivo); // fecha o arquivo novamente

    return 0;
}
