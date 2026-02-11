Algoritmo "Tabuada"
// Escrever um algoritmo que leia 20 valores para uma variável n e, para
// cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
// 1 x n = n
// 2 x n = 2n
// 3 x n = 3n
// .......
// n x n = n2
Var
   n :inteiro
   q, i :inteiro

Inicio
   q := 20

   para i de 1 ate q passo 1 faca
      escreva("Digite um numero para a tabuada: ")
      leia(n)
      para i de 1 ate n passo 1 faca
           escreval("1 x", i, " = ", 1 * i)
      fimpara
   fimpara
Fimalgoritmo