Algoritmo "Produto através de somas sucessivas"
// Crie um programa que lê dois números e calcula o produto entre eles
// através de somas sucessivas (não usar *, somente +) !
Var
   i :inteiro
   num1, num2, produto :inteiro

Inicio
   produto:= 0
   escreva("Digite o primeiro número: ")
   leia(num1)
   escreva("Digite o segundo número: ")
   leia(num2)

   para i de 1 ate num1 passo 1 faca
      produto := produto + num2
   fimpara

   escreval("O produto é: ", produto)

Fimalgoritmo