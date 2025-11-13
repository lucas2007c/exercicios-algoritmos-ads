/*
Crie uma struct Data com dia, mês e ano. Leia uma data e imprima no formato DD/MM/AAAA.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Data {
	int dia;
	int mes;
	int ano;	
};

int main(void) {
	srand(time(NULL));

	struct Data data;
	
	data.mes = (rand() % 11) + 1;
	switch(data.mes){
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11: {
			data.dia = (rand() % 31) + 1;
			break;
		}
		case 2: {
			data.dia = (rand() % 28) + 1;
			break;
		}
		default:
			data.dia = (rand() % 30) + 1;
	}
	
	data.ano = 2000 + (rand() % 26);
	
	if(data.dia < 10)
		printf("0");
	printf("%d/", data.dia);
	
	if(data.mes < 10)
		printf("0");
	printf("%d/", data.mes);
	
	printf("%d\n", data.ano);
	
	system("pause");
	return 0;
}
