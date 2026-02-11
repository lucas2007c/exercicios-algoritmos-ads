Algoritmo "Media aritmética"
// Construir um algoritmo que calcule a média aritmética de vários valores
// inteiros positivos, lidos externamente. O final da leitura acontecerá
// quando for lido um valor negativo.
Var
   num, soma :inteiro
   qtdNumeros :inteiro
   media :real
Inicio
   repita
      escreva("Digite o numero para ser somado: ")
      leia(num)
      se(num >= 0)entao
         soma := soma + num
         qtdNumeros := qtdNumeros + 1
      fimse
   ate num < 0
   
   escreval
   media := soma / qtdNumeros
   escreva("A media é:", media:1:1)

Fimalgoritmo