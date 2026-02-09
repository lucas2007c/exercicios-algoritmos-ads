/*
Dados dois vetores de tamanho N, faça uma função booleana que retorna "true" se os mesmos possuam conteúdo igual e 
"false" caso contrário, teste a função.
*/

#include <stdio.h>
#include <stdlib.h>

bool saoIguais(int[], int[], int);
void montarVetores(int[], int[], int);

int main(void){
	int N;
	
	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &N);
	
	bool iguais;
	int vetor1[N];
	int vetor2[N];
	
	montarVetores(vetor1, vetor2, N);
	
	iguais = saoIguais(vetor1, vetor2, N);
	
	if(iguais){
		printf("Os vetores sao iguais.\n");
	} else {
		printf("Os vetores sao diferentes.\n");
	}
	
	system("pause");
	return 0;
}

void montarVetores(int vetor1[], int vetor2[], int N){
	int num;
	printf("Montando vetor 1:\n");
	for(int i = 0; i < N; i++){
		printf("%d-Digite um numero: ", i + 1);
		scanf("%d", &num);
		vetor1[i] = num;
	}
	
	printf("\n");
	
	printf("Montando vetor 2:\n");
	for(int i = 0; i < N; i++){
		printf("%d-Digite um numero: ", i + 1);
		scanf("%d", &num);
		vetor2[i] = num;
	}
	
	printf("\n");
}

bool saoIguais(int vetor1[], int vetor2[], int N){
	bool iguais = true;
	for(int i = 0; i < N; i++){
		if(vetor1[i] != vetor2[i]){
			iguais = false;
		}
	}
	
	return iguais;
}




