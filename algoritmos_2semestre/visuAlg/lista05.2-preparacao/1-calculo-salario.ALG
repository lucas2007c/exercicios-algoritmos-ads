Algoritmo "Cálculo de salário com horas extras"
// Escreva um algoritmo que leia as horas trabalhadas no mês e o
// valor da hora. Se o funcionário trabalhou mais de 160 horas, calcule o
// excedente com adicional de 50%.
Var
   horasTrabalhadas, horasExtras :inteiro
   valorHora, valorExcedente, salario :real

Inicio
   escreval("Quantas horas você trabalhou no mês?")
   leia(horasTrabalhadas)
   escreval("Quanto vale a sua hora?")
   leia(valorHora)

   se(horasTrabalhadas > 160)entao
      horasExtras := horasTrabalhadas - 160
      valorExcedente := horasExtras * (valorHora + (valorHora * 0.5))
      escreval("Você trabalhou total de:", horasExtras, " Horas extras")
      escreval("O valor total de suas horas extras é: R$", valorExcedente:1:2)
   senao
      escreval("Não houve horas extras.")
   fimse
   
   salario := valorHora * 160 + valorExcedente
   escreval
   escreval("Você recebeu R$", salario:1:2, " De salário")

Fimalgoritmo