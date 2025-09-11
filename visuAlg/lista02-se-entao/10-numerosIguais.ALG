Algoritmo "numeros iguais"
// Faça um algoritmo que leia dois números e identifique se são iguais ou
// diferentes. Caso eles sejam iguais imprima uma mensagem dizendo que eles
// são iguais. Caso sejam diferentes, informe qual número é o maior e uma
// mensagem que são diferentes.
Var
   num1, num2 :inteiro


Inicio
   escreva("Digite o primeiro numero: ")
   leia(num1)
   escreva("Digite o segundo numero: ")
   leia(num2)

   se(num1 = num2)entao
      escreval("Os numeros são iguais")
fimalgoritmo
fimse

se(num1 > num2)entao
   escreval("Os numeros são diferentes e o", num1, " é maior")
senao
   escreval("Os numeros são diferentes e o", num2, " é maior")
fimse

Fimalgoritmo