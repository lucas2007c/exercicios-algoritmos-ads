Algoritmo "Dia da semana"
// Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o
// dia da semana correspondente, sendo domingo o dia de número 1. Se o
// número não corresponder a um dia da semana, mostre uma mensagem de erro.
Var
   num :inteiro
Inicio
   escreva("Escolha um numero de 1 a 7: ")
   leia(num)

   escreva(" ")
   escolha num
   caso 1
      escreval("O dia da semana correspondente é: Domingo")
   caso 2
      escreval("O dia da semana correspondente é: Segunda-feira")
   caso 3
      escreval("O dia da semana correspondente é: Terça-feira")
   caso 4
      escreval("O dia da semana correspondente é: Quarta-feira")
   caso 5
      escreval("O dia da semana correspondente é: Quinta-feira")
   caso 6
      escreval("O dia da semana correspondente é: Sexta-feira")
   caso 7
      escreval("O dia da semana correspondente é: Sábado")
   outrocaso
      escreval("Opção incorreta. Escolha uma das opções disponíveis!")
   fimescolha

Fimalgoritmo