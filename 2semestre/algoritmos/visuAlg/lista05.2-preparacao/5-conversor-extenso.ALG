Algoritmo "Conversor de número para extenso (1 a 99)"
// Escreva um algoritmo que leia um número entre 1 e 99 e imprima o número
// por extenso (Ex: 42 = "quarenta e dois").
Var
   num, numUnidade :inteiro
   numDiv10 :real
   dezena, unidade :caracter

Inicio

   enquanto (num > 99) OU (num < 19)faca
      escreva("Digite um numero entre 1 e 99: ")
      leia(num)
   fimenquanto

   se(num > 20)entao
      numDiv10 := num / 10

      se(numDiv10 >= 9)entao
         dezena := "Noventa"
         numUnidade := num - 90
      fimse

      se(numDiv10 >= 8) E (numDiv10 < 9)entao
         dezena := "Oitenta"
         numUnidade := num - 80
      fimse

      se(numDiv10 >= 7) E (numDiv10 < 8)entao
         dezena := "Setenta"
         numUnidade := num - 70
      fimse

      se(numDiv10 >= 6) E (numDiv10 < 7)entao
         dezena := "Sessenta"
         numUnidade := num - 60
      fimse

      se(numDiv10 >= 5) E (numDiv10 < 6)entao
         dezena := "cinquenta"
         numUnidade := num - 50
      fimse

      se(numDiv10 >= 4) E (numDiv10 < 5)entao
         dezena := "Quarenta"
         numUnidade := num - 40
      fimse

      se(numDiv10 >= 3) E (numDiv10 < 4)entao
         dezena := "Trinta"
         numUnidade := num - 30
      fimse

      se(numDiv10 >= 2) E (numDiv10 < 3)entao
         dezena := "Vinte"
         numUnidade := num - 20
      fimse

      escolha numUnidade
      caso 1
         unidade := "Um"
      caso 2
         unidade := "Dois"
      caso 3
         unidade := "Três"
      caso 4
         unidade := "Quatro"
      caso 5
         unidade := "Cinco"
      caso 6
         unidade := "Seis"
      caso 7
         unidade := "Sete"
      caso 8
         unidade := "Oito"
      caso 9
         unidade := "Nove"
      fimescolha
      escreval(num, " = ", dezena, " e ", unidade)
   fimse

   se(num <= 20)entao
      escolha num
      caso 20
          escreval(num, " = Vinte")
      caso 19
         escreval(num, " = Dezenove")
         // ........
      fimescolha
   fimse


Fimalgoritmo