Algoritmo "Jogo de adivinhação com dicas"
// Implemente um jogo de adivinhação em que o usuário escolhe um número (N)
//  e o computador escolhe um número aleatório (X) entre 1 e N.

// O usuário então tem 7 tentativas para acertar o valor de X.

// A cada palpite, o computador deve informar se o palpite é maior ou menor
// que X.

// Se o usuário acertar o valor de X, deve ser exibida uma mensagem de acerto,
// o valor de X e o programa deve ser encerrado.

// Caso o usuário não acerte o valor de X nas 7 tentativas, deve ser exibida
// uma mensagem de erro, o valor de X e o programa deve ser encerrado.
Var
   num, numComputador, palpite, palpitesRestantes, i :inteiro
   acertou :logico

Inicio
   palpitesRestantes := 7
   escreva("Insira um número: ")
   leia(num)
   aleatorio 1,num
   leia(numComputador)
   aleatorio off
   escreval

   repita
      escreval("Adivinhe o numero sorteado de 1 a", num, ":")
      leia(palpite)

      se(palpite = numComputador)entao
         acertou := verdadeiro
         escreva("E o número era.......")
         escreval(numComputador, "! Parabéns, você acertou!")
      senao
         palpitesRestantes := palpitesRestantes - 1
         se(palpite > numComputador)entao
            escreval("Ops! Você chutou um número maior que o sorteado")
         fimse

         se(palpite < numComputador)entao
            escreval("Ops! Você chutou um número menor que o sorteado")
         fimse
         escreval
         
         se(palpitesRestantes > 0)entao
            escreval("Você ainda tem", palpitesRestantes, " Tentativas")
         fimse
      fimse

      se(palpitesRestantes = 0)entao
         escreval("Oh não! acabaram suas tentativas, o número sorteado era:", numComputador)
         escreval("Boa sorte na próxima!")
      fimse
      escreval
   ate((palpitesRestantes = 0) OU (acertou = verdadeiro))


Fimalgoritmo