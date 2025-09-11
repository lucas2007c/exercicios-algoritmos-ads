Algoritmo "Menu de loja"
// Crie um progrma para uma loja de móveis que mostra o seguinte menu na tela
// de vendas:
// 1-Venda a Vista
// 2-Venda a Prazo 30 dias
// 3-Venda a Prazo 60 dias
// 4-Venda a Prazo com 90 dias
// 5-Venda com cartão de débito
// 6-Venda com cartão de crédito
// Informe qual foi a opção selecionada pelo usuário.
Var
opcao :inteiro


Inicio
escreval("Menu de vendas")
   escreval("Digite: ")
   escreval("1- Venda a Vista")
   escreval("2- Venda a Prazo 30 dias")
   escreval("3- Venda a Prazo 60 dias")
   escreval("4- Venda a Prazo 90 dias")
   escreval("5- Venda com cartão de débito")
   escreval("6- Venda com cartão de crédito")
   escreva("Digite sua escolha: ")
   leia(opcao)

   escolha opcao
   caso 1
      escreval("Você escolheu: Venda a Vista")
   caso 2
      escreval("Você escolheu: Venda a Prazo 30 dias")
   caso 3
      escreval("Você escolheu: Venda a Prazo 60 dias")
   caso 4
      escreval("Você escolheu: Venda a Prazo 90 dias")
   caso 5
      escreval("Você escolheu: Venda com cartão de débito")
   caso 6
        escreval("Você escolheu: Venda com cartão de crédito")
   outrocaso
      escreval("Opção incorreta. Escolha uma das opções disponíveis!")
   fimescolha


Fimalgoritmo