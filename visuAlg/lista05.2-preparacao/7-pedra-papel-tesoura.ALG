Algoritmo "Jogo de Pedra, Papel e Tesoura"
// Simule uma partida entre o usuário e o computador. Permita jogar 10
// rodadas e exiba quem venceu no final.
Var
   computador, jogador :caracter
   computadorEscolha :inteiro
   pontosJogador, pontosComputador :inteiro
   i :inteiro

Inicio
   para i de 1 ate 10 passo 1 faca
      repita
         escreval("Selecione sua Jogada: ")
         escreval("1-Pedra")
         escreval("2-Papel")
         escreval("3-Tesoura")
         leia(jogador)
      ate (jogador = "1") OU (jogador = "2") OU (jogador = "3")

      escolha jogador
      caso "1"
         jogador := "Pedra"
      caso "2"
         jogador := "Papel"
      caso "3"
         jogador := "Tesoura"
      fimescolha

      aleatorio 1,3
      leia(computadorEscolha)
      escreval
      aleatorio off

      escolha computadorEscolha
      caso 1
         computador := "Pedra"

         se (jogador = "Papel")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o jogador !")
            pontosJogador := pontosJogador + 1
         fimse

         se (jogador = "Tesoura")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o computador!")
            pontosComputador := pontosComputador + 1
         fimse

         se (jogador = "Pedra")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Empate!")
         fimse

      caso 2
         computador := "Papel"

         se (jogador = "Tesoura")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o jogador !")
            pontosJogador := pontosJogador + 1
         fimse

         se (jogador = "Pedra")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o computador!")
            pontosComputador := pontosComputador + 1
         fimse
         
         se (jogador = "Papel")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Empate!")
         fimse

      caso 3
         computador := "Tesoura"

         se (jogador = "Pedra")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o jogador !")
            pontosJogador := pontosJogador + 1
         fimse

         se (jogador = "Papel")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Um ponto para o computador!")
            pontosComputador := pontosComputador + 1
         fimse
         
         se (jogador = "Tesoura")entao
            escreval("O jogador jogou ", jogador, " e o computador ", computador)
            escreval("Empate!")
         fimse

      fimescolha
      escreval
   fimpara
   escreval("------------RESULTADOS------------")
   escreval("Resultado: Jogador", pontosJogador, " x", pontosComputador, " Computador")

   se(pontosJogador > pontosComputador)entao
      escreval("O jogador venceu!")
   fimse

   se(pontosJogador < pontosComputador)entao
      escreval("O computador venceu!")
   fimse
   
   se (pontosjogador = PontosComputador)entao
    escreval("O jogo terminou empatado!")
   fimse

Fimalgoritmo