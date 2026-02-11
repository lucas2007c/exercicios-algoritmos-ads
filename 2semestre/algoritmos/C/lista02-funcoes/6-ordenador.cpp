/*
7- Fazer um algoritmo que leia 4 valores (A,B,C,D) e mostre-os na ordem lida. Em seguida, ordene-os em ordem decrescente e mostre-os novamente, já ordenados.
a) Crie um procedimento que recebe as quatro variáveis e as exibe em ordem decrescente e crescente
*/

#include <stdio.h>
#include <stdlib.h>

void ordenador(int*, int*, int*, int*);
void inverter(int*, int*);

int main(void){
	int a, b, c, d = 0;
	
	printf("Digite o primeiro número:");
	scanf("%d", &a);
	
	printf("Digite o segundo número:");
	scanf("%d", &b);
	
	printf("Digite o terceiro número:");
	scanf("%d", &c);
	
	printf("Digite o quarto número:");
	scanf("%d", &d);
	
	ordenador(&a, &b, &c, &d);
	
	system("pause");
	return 0;
}

void inverter(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void ordenador(int* num1, int* num2, int* num3, int* num4){
	int parada = 0;
	printf("%d %d %d %d", *num1, *num2, *num3, *num4);
	do{
		if(*num1 < *num2){
			inverter(num1, num2);
		}
		
		if(*num2 < *num3){
			inverter(num2, num3);
		}
		
		if(*num3 < *num4){
			inverter(num3, num4);
		}
	
	} while( (*num1 < *num2) || (*num2 < *num3) || (*num3 < *num4));
	printf("\n%d %d %d %d\n", *num1, *num2, *num3, *num4);
}






