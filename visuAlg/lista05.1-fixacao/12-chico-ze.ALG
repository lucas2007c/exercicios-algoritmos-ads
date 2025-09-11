Algoritmo "chico e zé"
// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10
// metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
// imprima quantos anos serão necessários para que Zé seja maior que Chico.
Var
   altChico, altZe :inteiro
   anos :inteiro

Inicio
   altChico := 150
   altZe := 110
   anos := 0

   repita
      altChico := altChico + 2
      altZe := altZe + 3
      anos := anos + 1
   ate(altZe > altChico)
   
   escreva("Depois de", anos, " anos Zé ficou maior que Chico")

Fimalgoritmo