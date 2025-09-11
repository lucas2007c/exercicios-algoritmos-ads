Algoritmo "Varios fatoriais"
// Escrever um algoritmo que leia um número n que indica quantos valores
// devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo
// o valor lido e o fatorial deste valor.

Var
   i, n, j :inteiro
   num, fatorial :inteiro

Inicio
   escreva("Digite quantos numeros vão ser lidos: ")
   leia(n)

   para i de 1 ate n passo 1 faca
      fatorial := 1
      escreva("Digite um número: ")
      leia(num)
      para j de 1 ate num passo 1 faça
         fatorial := fatorial * j
      fimpara
      escreval(num, "! =", fatorial)
   fimpara

Fimalgoritmo