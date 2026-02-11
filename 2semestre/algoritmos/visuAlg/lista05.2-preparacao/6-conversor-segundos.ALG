Algoritmo "Conversor de Tempo Total"
// Peça ao usuário um tempo em segundos e converta para horas, minutos e
// segundos.
Var
   segs, segsConvert, horas, minutos :inteiro

Inicio
   escreva("Digite os segundos: ")
   leia(segs)

   se(segs >= 60)entao
      enquanto (segs >= 3600) faca
         segs := segs - 3600
         horas := horas + 1
      fimenquanto
      
      enquanto (segs >= 60) faca
      segs := segs - 60
      minutos := minutos + 1
      fimenquanto
   fimse
   
   segsConvert := segs

   escreval(horas:1, ":", minutos:1, ":", segsConvert:1)

Fimalgoritmo