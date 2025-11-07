/*
Crie uma struct Livro com título, autor e número de páginas. Leia 5 livros e mostre os dados do livro que possui o 
maior número de páginas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct Livro{
	char titulo[50];
	char autor[50];
	int paginas;
};

struct MaiorLivro{
	int indice;
	int paginas;
	int qtdIguais;
};

int main(void) {
	srand(time(NULL));
	struct Livro livros[N];
	struct MaiorLivro maiorLivro = {0, 0, 0};
	
	for(int i = 0; i < N; i++){
		printf("%d - Digite o titulo do livro: ", i + 1);
		gets(livros[i].titulo);
		
		printf("%d - Digite o autor do livro: ", i + 1);
		gets(livros[i].autor);
		
		int paginas;
		printf("%d - Digite quantas páginas tem o livro: ", i + 1);
		scanf("%d", &paginas);
		
		getchar(); // limpa o "Lixo" do buffer

		livros[i].paginas = paginas;
		printf("A quantidade de paginas desse livro eh %d\n\n", paginas);
		
		if(livros[i].paginas > maiorLivro.paginas){
			maiorLivro.indice = i;
			maiorLivro.paginas = paginas;
		} else if (livros[i].paginas == maiorLivro.paginas){
			(maiorLivro.qtdIguais)++;
		}
	}
	
	struct Livro livro = livros[maiorLivro.indice];
	if(!maiorLivro.qtdIguais > 0){
		printf("O livro com maior quantidade de paginas eh o '%s' do autor %s, com %d paginas!\n", 
		livro.titulo, livro.autor, livro.paginas);
	} else {
		printf("Ha %d livros com %d paginas\n", maiorLivro.qtdIguais + 1, maiorLivro.paginas);
	}
	
	system("pause");
	return 0;
}



