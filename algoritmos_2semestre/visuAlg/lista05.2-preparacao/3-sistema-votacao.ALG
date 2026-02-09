Algoritmo "Sistema de votação em enquete"
// Crie um algoritmo que simule uma enquete com 3 opções (A, B, C).
// O usuário poderá votar até digitar "0" para encerrar. No final, mostre a
// quantidade de votos de cada opção e a mais votada.
Var
   num, qtdJoseph, qtdJotaro, qtdJohnny :inteiro

Inicio
   repita
      escreval("Vote qual o melhor Jojo: ")
      escreval("1-Joseph Joestar")
      escreval("2-Jotaro kujoh")
      escreval("3-Johnny Joestar")
      leia(num)

      escolha num
      caso 1
         qtdJoseph := qtdJoseph + 1
      caso 2
         qtdJotaro := qtdJotaro + 1
      caso 3
         qtdJohnny := qtdJohnny + 1
      caso 0
         escreval("---------------RESULTADOS---------------")
      outrocaso
         escreval("Opção Inválida")
      fimescolha

      escreval
   ate num = 0

   escreval("Quantidade de votos:")
   escreval("Joseph:", qtdJoseph)
   escreval("Jotaro:", qtdJotaro)
   escreval("Johnny:", qtdjohnny)
   
   escreval

   se((qtdJoseph > qtdJotaro) E (qtdJoseph > qtdJohnny))entao
      escreval("Joseph GOAT foi o mais votado!")
   senao
      se((qtdJotaro > qtdJoseph) E (qtdJotaro > qtdJohnny))entao
         escreval("Jotaro GOAT foi o mais votado!")
      senao
         se((qtdJohnny > qtdjoseph) E (qtdJohnny > qtdJotaro))entao
            escreval("Johnny GOAT foi o mais votado!")
         senao
            escreval("Houve um empate!")
         fimse
      fimse
   fimse

Fimalgoritmo