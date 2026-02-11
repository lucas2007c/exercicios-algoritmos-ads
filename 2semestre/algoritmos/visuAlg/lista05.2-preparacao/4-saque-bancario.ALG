Algoritmo "Saque bancário com verificação de cédulas"
// Faça um algoritmo que leia um valor inteiro (múltiplo de 10) e exiba a
// menor quantidade de cédulas (R$100, R$50, R$20, R$10) necessárias para o
// saque.
Var
   valorSaque, valorTotalCedulas :inteiro
   cedulas100, cedulas50, cedulas20, cedulas10 :inteiro

Inicio
   repita
      escreva("Digite o valor a ser sacado(multiplo de 10): ")
      leia(valorSaque)
   ate valorSaque % 10 = 0

   enquanto valorSaque >= 100 faca
      valorSaque := valorSaque - 100
      cedulas100 := cedulas100 + 1
   fimenquanto

   enquanto valorSaque >= 50 faca
      valorSaque := valorSaque - 50
      cedulas50 := cedulas50 + 1
   fimenquanto
   
   enquanto valorSaque >= 20 faca
      valorSaque := valorSaque - 20
      cedulas20 := cedulas20 + 1
   fimenquanto
   
   enquanto valorSaque >= 10 faca
      valorSaque := valorSaque - 10
      cedulas10 := cedulas10 + 1
   fimenquanto

   escreval("Soltando Notas...")
   escreval(cedulas100, "x notas de R$100")
   escreval(cedulas50, "x notas de R$50")
   escreval(cedulas20, "x notas de R$20")
   escreval(cedulas10, "x notas de R$10")

Fimalgoritmo