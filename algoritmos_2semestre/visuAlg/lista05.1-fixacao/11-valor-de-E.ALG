Algoritmo "Calcular valor de E"
// Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e
// escreve o valor de E. ( E = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + (1 / N!) )
Var
   n, i, j,  fat :inteiro
   varE :real

Inicio
   varE := 1
   escreva("Digite o número: ")
   leia(n)

   para i de 1 ate n passo 1 faca
        fat := 1
      para j de 1 ate i passo 1 faca
         fat := fat * j
      fimpara
      escreval
      varE := varE + (1 / fat)
   fimpara
   
   escreval("O valor de E é: ", varE:1:2)

Fimalgoritmo