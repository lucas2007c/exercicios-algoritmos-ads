Algoritmo "Par ou Ímpar"
// Simule um jogo de par ou ímpar onde o usuário joga contra o computador.

// Inicialmente o usuário deve informar se escolhe par(1), ímpar(2) ou sair(3)
// (menu com valores 1, 2 e 3) e as partidas devem acontecer até que o usuário
// digite o valor correspondente a sair(3).
// Faça a validação dessa entrada, caso seja digitado um valor diferente de
// 1, 2 ou 3 o menu deve ser repetido até que haja uma entrada válida.

// Posteriormente, o usuário escolhe um número válido para par ou ímpar, de 0
// a 5 (não precisa se preocupar com validar esses números, vamos imaginar que
// o usuário não digite um valor errado).


// Então o computador sorteia um número aleatório entre 0 e 5, para isso,
// ative a função aleatorio 0,5 faça a leitura da jogada do computador e
// então desative o aleatório (aleatorio off).

// Ao final, informe:

// quantas partidas foram jogadas
// quantas partidas foram vencidas pelo usuário
// quantas partidas foram vencidas pelo computador
// o percentual de vitórias do usuário
// o percentual de vitórias do computador
Var
   escolhaUsuario, numUsuario, numComputador, resultado :inteiro
   qtdPartidas, vitoriasUsuario, vitoriasComputador :inteiro
   porcUsuario, porcComputador :real

Inicio
   repita
      repita
         escreval("Escolha uma opção: ")
         escreval("1-Par")
         escreval("2-Ímpar")
         escreval("3-Sair")
         leia(escolhaUsuario)
         escreval
      ate ((escolhaUsuario >= 1) E (escolhaUsuario <= 3))
      se(escolhaUsuario <> 3)entao
         qtdPartidas := qtdPartidas + 1

         escreva("Digite um número de 0 a 5: ")
         leia(numUsuario)

         escreval
         escreva("Número escolhido pelo computador: ")
         aleatorio 0,5
         leia(numComputador)
         aleatorio off

         resultado := (numUsuario + numComputador) % 2

         escolha escolhaUsuario
         caso 1
            se(resultado = 0)entao
               escreval("O resultado é par, O usuário venceu!")
               vitoriasUsuario := vitoriasUsuario + 1
            senao
               escreval("O resultado é ímpar, O computador venceu!")
               vitoriasComputador := vitoriasComputador + 1
            fimse
         caso 2
            se(resultado = 1)entao
               escreval("O resultado é ímpar, O usuário venceu!")
               vitoriasUsuario := vitoriasUsuario + 1
            senao
               escreval("O resultado é par, O computador venceu!")
               vitoriasComputador := vitoriasComputador + 1
            fimse
         fimescolha
         escreval
      fimse

   ate(escolhaUsuario = 3)

   escreval

   se(qtdPartidas > 0)entao
      escreval("----------------RESULTADOS----------------")
      escreval("O total de partidas foi:", qtdPartidas)
      escreval("O Usuário venceu:", vitoriasUsuario, " partidas")
      escreval("O Computador venceu:", vitoriasComputador, " partidas")
      escreval
      escreval("O usuário venceu ", ((vitoriasUsuario / qtdPartidas) * 100):1:1, "% das partidas")
      escreval("O computador venceu ", ((vitoriasComputador / qtdPartidas) * 100):1:1, "% das partidas")
   fimse
Fimalgoritmo