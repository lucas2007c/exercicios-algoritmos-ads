Algoritmo "Sequência de Collatz"
// A sequência de Collatz, também conhecida como conjectura de Syracuse, é
// criada aplicando as seguintes regras a um número inteiro positivo:

// Se for par, divide por 2.
// Se for ímpar, multiplica por 3 e soma 1.
// Repita até chegar a 1.
Var
   num :real

Inicio
   escreval("Digite um número: ")
   leia(num)
   escreval

   repita
   escreval(num)
      escolha (num % 2)
      caso 0
         num := num / 2
      caso 1
         num := (num * 3) + 1
      fimescolha
   ate (num = 1)
   
   escreval(1)

Fimalgoritmo