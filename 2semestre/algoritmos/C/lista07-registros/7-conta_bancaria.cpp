/*
Crie uma struct ContaBancaria com nome, número e saldo. Escreva uma função para depositar e uma para sacar.
*/

#include <stdio.h>
#include <stdlib.h>

struct ContaBancaria {
	char nome[50];
	char numero[5];
	float saldo;
};

void depositar(ContaBancaria*, float);
void sacar(ContaBancaria*, float);

int main(void) {
	struct ContaBancaria conta = {"Lucas Carneiro", "0001", 0};
	int opcao;
	
	while(true) {
		float valor;
		printf("--- Caixa Eletronico ---\n");
		printf("Nome: %s\nNumero: %s\nSaldo: %0.2f\n\n", conta.nome, conta.numero, conta.saldo);
		printf("Selecione uma das opcoes abaixo: \n");
		printf("1 - Deposito\n2 - Saque\n0 - Sair\n");
		scanf("%d", &opcao);
		
		if(opcao == 0)
			break;
		
		switch(opcao){
			case 1: {
				printf("\nDigite o valor para depositar: ");
				scanf("%f", &valor);
				depositar(&conta, valor);
				break;
			}
			case 2: {
				printf("\nDigite o valor para sacar: ");
				scanf("%f", &valor);
				sacar(&conta, valor);
				break;
			}
			default:
				printf("\nOpcao invalida. Tente novamente.\n\n");
		}	
	}

	system("pause");
	return 0;
}

void depositar(ContaBancaria *conta, float valor) {
	if(valor > 0) {
		(*conta).saldo += valor;
		printf("\nDeposito realizado com sucesso!\n\n");
	} else
		printf("\nO valor minimo para deposito eh 0.1 centavos, tente novamente.\n\n");
};

void sacar(ContaBancaria *conta, float valor) {
	if(valor <= 0){
		printf("\nO valor minimo para saque eh 0.1 centavos, tente novamente.\n\n");
		return;
	}
	
	float novoSaldo = (*conta).saldo - valor;
	if(novoSaldo >= 0){
		(*conta).saldo = novoSaldo;
		printf("\nSaque realizado com sucesso!\n\n");
	} else 
		printf("\nSaldo insuficiente.\n\n");
};









