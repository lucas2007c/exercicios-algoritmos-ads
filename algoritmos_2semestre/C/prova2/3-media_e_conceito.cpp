
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
	O programa abaixo possui:
	um vetor com os nomes de 30 alunos
	uma matriz com 4 notas mais a m?dia (inicializada com valor 0) de 30 alunos
	um vetor com o conceito (aprovado se nota >=6, ifa se nota >= 4 e nota < 6, reprovado se nota < 4) inicializado com valor null
	Quem "liga" os vetores e matrizes s?o seus ?ndices 

	Implemente os m?todos calculaMedias (que calcula as m?dias, coluna 5 do vetor de notas) e defineConceitos (que define o conceito no vetor de conceitos)
	
*/

void exibe(char nomes[30][50], float notas[30][5], char conceitos[30][20]);
void calculaMedias(float notas[30][5]);
void defineConceitos(float notas[30][5], char conceitos[30][20]);

int main() {
    
	char nomes[30][50] = { "Ana Clara Oliveira", "Beatriz Gomes Ribeiro", "Bianca Moura Guimar?es", "Caio Azevedo Brito", "Camila Rocha Nogueira", "Clara Paim Oliveira", "Eduardo Antunes Klaus", "Felipe Correia Lima", "Gabriel Moreira Pinto", "Gabriela Duarte Santana", "Gustavo Batista Freitas", "Henrique Cardoso Araujo", "Isabela Mendes Castro", "Joao Pedro da Silva", "Julia Barros Ferreira", "Laura Monteiro Pires", "Leonardo Figueira Melo", "Leticia Cunha Rezende", "Lucas Fernandes Souza", "Luiza Teixeira Almeida", "Maria Eduarda Lopes", "Mariana Alves Costa", "Matheus Martins Duarte", "Miguel Santos Pereira", "Pedro Henrique Moraes", "Rafael Lima Carvalho", "Rafaela Tavares Cunha", "Sofia Ribeiro Andrade", "Thiago Campos Torres", "Vinicius Prado Fonseca"};
	float notas[30][5]= { {7.1, 6.7, 9.3, 7.6, 0}, {8.9, 3.9, 7.7, 9.7, 0}, {8.7, 3.3, 6.8, 1.2, 0}, {9.3, 4.6, 5.7, 6.6, 0}, {5.8, 4.4, 7.5, 5.9, 0}, {8.6, 6.3, 9.7, 9.6, 0}, {9.8, 6.8, 8.1, 1.0, 0}, {6.3, 5.6, 8.8, 8.2, 0}, {8.4, 6.8, 6.2, 2.4, 0}, {4.5, 3.9, 7.5, 1.7, 0}, {8.7, 5.8, 8.2, 8.7, 0}, {4.3, 4.5, 5.4, 1.2, 0}, {6.2, 6.6, 8.2, 3.1, 0}, {2.5, 3.1, 4.7, 7.1, 0}, {6.3, 5.4, 6.5, 7.0, 0}, {6.6, 5.6, 9.6, 4.3, 0}, {5.8, 3.8, 5.0, 3.8, 0}, {8.9, 2.9, 6.9, 6.9, 0}, {8.8, 6.0, 5.6, 9.8, 0}, {4.1, 5.3, 7.5, 0.8, 0}, {5.7, 4.1, 9.7, 1.1, 0}, {4.0, 3.2, 2.6, 5.1, 0}, {5.5, 4.4, 7.5, 9.9, 0}, {7.7, 5.5, 6.8, 5.4, 0}, {7.0, 2.9, 6.3, 1.3, 0}, {5.1, 3.0, 4.6, 0.8, 0}, {6.8, 5.9, 7.0, 1.9, 0}, {7.8, 2.3, 8.2, 1.7, 0}, {7.4, 4.1, 7.3, 3.9, 0}, {9.0, 4.1, 5.0, 6.2, 0} };
    char conceitos[30][20] = { "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null", "null"};
   	
	calculaMedias(notas);
	defineConceitos(notas, conceitos);   
	   
	exibe(nomes, notas, conceitos);
	
	system("pause");

    return 0;
}

void exibe(char nomes[30][50], float notas[30][5], char conceitos[30][20]){
	
	printf("   NOME\t\t\tNota1\tNota2\tNota3\tNota4\tMedia\tConceito\n");
	for (int i = 0; i < 30; i++) {
        printf("%s\t", nomes[i] );
        for (int j = 0; j < 5; j++) {
            printf(" %.1f\t", notas[i][j]);
        }
        printf("%s\n",conceitos[i]);
    }
}

void calculaMedias(float notas[30][5]){
	for (int i = 0; i < 30; i++) {
		float soma = 0;
		float media = 0;
		
        for (int j = 0; j < 4; j++) {  
         	soma += notas[i][j];
        }
        media = soma / 4;
        notas[i][4] = media;
    }
}

void defineConceitos(float notas[30][5], char conceitos[30][20]){
	for (int i = 0; i < 30; i++) {
        if(notas[i][4] >= 6){
        	strcpy(conceitos[i], "Aprovado");
		}
		
		if(notas[i][4] >= 4 && notas[i][4] < 6){
			strcpy(conceitos[i], "IFA");
		}
		
		if(notas[i][4] < 4){
			strcpy(conceitos[i], "Reprovado");
		}
    }
}





