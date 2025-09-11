Algoritmo "fatorial"
// Vamos implementar como exemplo um algoritmo para calcular o fatorial de
// um número. Para quem não sabe, fatorial é a multiplicação de todos os
// números de 1 até ao número que se está calculando. Por exemplo: Fatorial
// de 5 (5!) = 1 * 2 * 3 * 4 * 5 = 120
Var
num :inteiro
fatorial :inteiro
resultado :inteiro
i :inteiro

Inicio
fatorial := 1
escreva("Digite um numero: ")
leia(num)
escreval

para i de 1 ate num passo 1 faca
fatorial := fatorial * i
fimpara

escreval("O fatorial é: ", fatorial)

Fimalgoritmo