Algoritmo "Soma varios numeros"
// um algoritmo para somar valores até o usuário digitar o valor 0. Ou seja,
// vamos somar todos os valores que o usuário digitar, porém quando ele
// digitar 0 o "loop" acaba, a cada iteração do loop vamos apresentar o
// resultado atual da soma.
Var
   num, soma :real

Inicio
   soma := 0
   escreva("Digite o primeiro numero para somar: ")
   leia(num)

   enquanto num <> 0 faca
      soma := soma + num
      escreval("O resultado da soma é:", soma:1:2)
      escreva("Digite o próximo numero para somar(digite 0 para sair): ")
      leia(num)
   fimenquanto

Fimalgoritmo