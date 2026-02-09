Algoritmo "Quantidade de numeros digitados entre 100 e 200"
// Construa um programa que lê vários números e informa quantos números
// entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o
// algoritmo deverá cessar sua execução.
Var
   num :inteiro
   qtdNumeros :inteiro

Inicio
   repita
      escreva("Digite um número (0 para sair)")
      leia(num)
      se((num > 100) E (num < 200))entao
         qtdNumeros := qtdNumeros + 1
      fimse
   ate num = 0
   
   escreval
   escreva("Foram digitados", qtdNumeros, " numeros entre 100 e 200")
Fimalgoritmo