Algoritmo "Total de pessoas com menos de 21 e mais de 50"
// Faça um programa que permite entrar com a idade de várias pessoas e imprime:
// • total de pessoas com menos de 21 anos
// • total de pessoas com mais de 50 anos
Var
   idade :inteiro
   qtd21, qtd50 :inteiro

Inicio
   repita
      escreva("Digite sua idade (0 para sair)")
      leia(idade)
      se((idade > 0) E (idade < 21))entao
      qtd21 := qtd21 + 1
      fimse

      se(idade > 50)entao
      qtd50 := qtd50 + 1
      fimse
   ate idade = 0
   
   escreval
   escreval("Há um total de", qtd21, " pessoas com menos de 21 anos")
   escreval("Há um total de", qtd50, " pessoas com mais de 50 anos")
Fimalgoritmo