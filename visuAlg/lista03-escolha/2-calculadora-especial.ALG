Algoritmo "Calculadora especial"
// Faça um programa, utilizando estrutura de condição, que receba um número
// real, digitado pelo usuário e mostre o menu para selecionar o tipo de
// cálculo que deve ser realizado conforme menu abaixo:
// 101-Raiz quadrada
// 102-A metade
// 103-10% do número
// 104-O dobro
Var
   num :real
   opcao :inteiro
   resultado :real

Inicio
   escreva("Digite um numero: ")
   leia(num)
   escreval("Escolha uma das opções:")
   escreval("101-Raiz quadrada")
   escreval("102-A metade")
   escreval("103-10% do número")
   escreval("104-O dobro")
   escreva("Digite sua escolha: ")
   leia(opcao)

   escolha opcao
   caso 101
      resultado := RAIZQ(num)
   caso 102
      resultado := num / 2
   caso 103
      resultado := num * 0.1
   caso 104
      resultado := num * 2
   outrocaso
      escreval("Escolha uma opção válida!")
fimalgoritmo
fimescolha

escreval("O resultado da operação é: ", resultado:1:2)
Fimalgoritmo