Algoritmo "Calculadora"
// Você deseja criar um algoritmo para uma calculadora, o usuário digita o
// primeiro número, a operação que deseja executar e o segundo número.
// Dependendo do que o usuário informar como operador, o algoritmo executará
// um cálculo diferente (soma, subtração, multiplicação ou divisão).
Var
   num1 :real
   operacao :caracter
   num2 :real
   resultado :real

Inicio
   escreva("Digite o primeiro numero: ")
   leia(num1)
   escreva("Digite a operacao(+, -, *, /): ")
   leia(operacao)
   escreva("Digite o segundo numero: ")
   leia(num2)

   escolha operacao
   caso "+"
      resultado := num1 + num2
   caso "-"
      resultado := num1 - num2
   caso "*"
      resultado := num1 * num2
   caso "/"
      resultado := num1 / num2
   outrocaso
      escreval("Operacao inválida")
   fimescolha

   escreval("O resultado da operação é: ", resultado:1:2)

Fimalgoritmo