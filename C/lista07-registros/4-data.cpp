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

void corrigeData(Data*);

int main(void) {
	srand(time(NULL));

	struct Data data;
	
	data.dia = (rand() % 31) + 1;
	data.mes = (rand() % 11) + 1;
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
