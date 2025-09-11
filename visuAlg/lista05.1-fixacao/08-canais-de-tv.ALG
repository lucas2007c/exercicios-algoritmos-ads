Algoritmo "Pesquisa de audiência"
// Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma
// certa cidade. Para cada casa visitada foram fornecidos o número do canal
// (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele naquela
// casa. Se a televisão estivesse desligada nada seria anotado, ou seja,
// esta casa não entraria na pesquisa. Criar um programa que:
// • Lê um número indeterminado de dados, isto é, o número do canal e o
// número de pessoas que estavam assistindo;
// • Calcula e imprime a porcentagem de audiência em cada canal.
// Obs.: Para encerrar a entrada de dados, digite o número do canal zero.
Var
   canalAssistido, qtdAssistindo :inteiro
   qtdCanal4, qtdCanal5, qtdCanal7, qtdCanal12 :inteiro
   qtdTotalAssistindo :inteiro

Inicio
   repita
      escreval("Canais: ")
      escreval("4- Esportes")
      escreval("5- Jornal")
      escreval("7- Desenhos")
      escreval("12- Novelas")
      escreval("13- A tv estava desligada")
      escreval("0 - Encerrar algoritmo")
      escreva("Qual canal estava passando na tv?: ")
      leia(canalAssistido)

      escolha canalAssistido
      caso 4
         escreva("Quantas pessoas estavam assistindo ao canal 4?: ")
         leia(qtdAssistindo)
         qtdCanal4 := qtdCanal4 + qtdAssistindo
         qtdTotalAssistindo := qtdTotalAssistindo + qtdAssistindo
      caso 5
         escreva("Quantas pessoas estavam assistindo ao canal 5?: ")
         leia(qtdAssistindo)
         qtdCanal5 := qtdCanal5 + qtdAssistindo
         qtdTotalAssistindo := qtdTotalAssistindo + qtdAssistindo
      caso 7
         escreva("Quantas pessoas estavam assistindo ao canal 7?: ")
         leia(qtdAssistindo)
         qtdCanal7 := qtdCanal7 + qtdAssistindo
         qtdTotalAssistindo := qtdTotalAssistindo + qtdAssistindo
      caso 12
         escreva("Quantas pessoas estavam assistindo ao canal 12?: ")
         leia(qtdAssistindo)
         qtdCanal12 := qtdCanal12 + qtdAssistindo
         qtdTotalAssistindo := qtdTotalAssistindo + qtdAssistindo
      caso 13
         escreva("Obrigado pela atenção.")
      outrocaso
         escreva("Este canal não existe")
      fimescolha
      escreval
   ate (canalAssistido = 0)

   escreval

   se(qtdTotalAssistindo > 0)entao
      escreval("A porcentagem de audiência dos canais é: ")
      escreval("Canal 4: ", ((qtdCanal4 / qtdTotalAssistindo) * 100):1:1)
      escreval("Canal 5: ", ((qtdCanal5 / qtdTotalAssistindo) * 100):1:1)
      escreval("Canal 7: ", ((qtdCanal7 / qtdTotalAssistindo) * 100):1:1)
      escreval("Canal 12: ", ((qtdCanal12 / qtdTotalAssistindo) * 100):1:1)
   senao
      escreval("Ninguém assistiu a nenhum programa")
   fimse
Fimalgoritmo