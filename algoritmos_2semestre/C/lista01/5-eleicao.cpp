/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int espectadores = 3;
	int idade, opniao, qtdPessoasRegular, qtdPessoasBom, qtdPessoasExcelente, idadeTotalExcelente = 0;
	float mediaIdade, porcBom = 0;
	
	for(int i = 1; i <= espectadores; i++){
		printf("\n");
		printf("Ola espector %d, por favor responda: \n", i);
		printf("Qual sua idade? ");
		scanf("%d", &idade);
		
		printf("\n");
		
		printf("De 1 a 3, conforme as opcoes abaixo, o que voce achou do filme?\n");
		do{
			printf("\n");
	 		printf("3-Excelente\n");
			printf("2-Bom\n");
			printf("1-Regular\n");
			scanf("%d", &opniao);
		
			switch(opniao){
				case 1: qtdPessoasRegular++ ; break;
				case 2: printf("Entrei nessa bct com a opniao: %d\n", opniao); qtdPessoasBom += 1 ; break;
				case 3: 
				qtdPessoasExcelente++;
				idadeTotalExcelente += idade; 
				break;
				default: printf("Opcao invalida");
			};
		} while(opniao < 1 || opniao > 3);
	};
	
	if(qtdPessoasExcelente > 0){
		mediaIdade = idadeTotalExcelente / qtdPessoasExcelente;
	}
	
	printf("qtdPessoasBom: %d\n", qtdPessoasBom);
	printf("espectadores: %d\n", espectadores);
	porcBom = ((float)qtdPessoasBom / espectadores) * 100;
	printf("porcentagem: %f\n", porcBom);
	
	printf("\n-----------------RESULTADOS---------------\n");
	printf("A media das idades que responderam excelente: %0.0f\n", mediaIdade);
	printf("A quantidade de pessoas que responderam regular: %d\n", qtdPessoasRegular);
	printf("%0.1f%% das pessoas responderam bom\n", porcBom);
	
	system("pause");
	return 0;
}
