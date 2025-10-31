#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	O programa abaixo inicializa uma matriz de 100x100 com valores aleat?rios entre 1 e 20
	O programa possui um vetor que conta quantas vezes cada n?mero ocorreu, 
	a posi??o 0 do vetor, guarda o n?mero de vezes que o n?mero 1 ocorreu na matriz
	a posi??o 1 do vetor, guarda o n?mero de vezes que o n?mero 2 ocorreu na matriz
	...
	a posi??o 19 do vetor, guarda o n?mero de vezes que o n?emro 20 ocorreu na matriz
	
	implemente o procedimento contaNumeros que faz a contagem e armazena corretamente no vetor 

*/

void contaNumeros(int matriz[100][100], int vet[]);

int main() {
    int matriz[100][100];
    int vet[20];

    srand(time(NULL));	

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            matriz[i][j] = rand() % 20 + 1; 
        }
    }

    
	for(int i = 0; i < 20; i++) 
        vet[i] = 0;    

    contaNumeros(matriz, vet);
	

    printf("Quantidade de ocorrencias de cada valor: \n");

	for(int i = 0; i < 20; i++) {
    	printf("%d - %d\n",(i+1),vet[i]);
  	}

  
  	system("pause");
	
    return 0;
}

void contaNumeros(int matriz[100][100], int vet[]){
	int num;
	for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            num = matriz[i][j];
            vet[num - 1]++;
        }
    }
}
