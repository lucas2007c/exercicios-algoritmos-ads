Algoritmo "semnome"
// Replique o exercício 2, mas dessa vez pergunte ao usuário qual será o
// valor inicial e qual será o valor final. Por exemplo, se o usuário digitar
// 2 e 7 o programa deverá exibir: 2 3 4 5 6 7

Var
   inicial, final :inteiro
   i, incrementador :inteiro

Inicio
   incrementador := 1
   escreva("Digite o numero inicial: ")
   leia(inicial)
   escreva("Digite o valor Final :")
   leia(final)

   se(inicial > final)entao
      enquanto inicial >= final faca
         escreva(inicial)
         inicial := inicial -1
      fimenquanto
fimalgoritmo
fimse

enquanto inicial <= final faca
   escreva(inicial)
   inicial := inicial + 1
fimenquanto
Fimalgoritmo