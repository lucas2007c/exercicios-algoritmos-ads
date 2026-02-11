Algoritmo "numero maior"
// Escrever um algoritmo que leia dois valores inteiro distintos e informe
// qual é o maior.

Var
num1 :inteiro
num2 :inteiro

Inicio
escreva("Digite o primeiro numero: ")
leia(num1)
escreva("Digite o segundo numero: ")
leia(num2)

se(num1 = num2)entao
escreva("os numeros sao iguais")
fimalgoritmo
fimse

se(num1 > num2)entao
escreva(num1, "é maior que ", num2)
senao
escreva(num2, " é maior que ", num1)
fimse


Fimalgoritmo