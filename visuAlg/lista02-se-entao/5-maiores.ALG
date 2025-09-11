Algoritmo "semnome"
// Ler 10 números e ao final informar quantos número(s) est(á)ão no
// intervalo entre 10 (inclusive) e 150 (inclusive).
Var
   num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 :inteiro
   maiores :inteiro

Inicio
   maiores := 0
   escreva("Digite o primeiro numero: ")
   leia(num1)
   se(num1 >= 10) E (num1 <= 150)entao
      maiores := maiores + 1
   fimse

   escreva("Digite o segundo numero: ")
   leia(num2)
   se(num2 >= 10) E (num2 <= 150)entao
      maiores := maiores + 1
   fimse

   escreva("Digite o terceiro numero: ")
   leia(num3)
   se(num3 >= 10) E (num3 <= 150)entao
      maiores := maiores + 1
   fimse

   escreva("Digite o quarto numero: ")
   leia(num4)
   se(num4 >= 10) E (num4 <= 150)entao
      maiores := maiores + 1
   fimse

   escreva("Digite o quinto numero: ")
   leia(num5)
   se(num5 >= 10) E (num5 <= 150)entao
      maiores := maiores + 1
   fimse

   escreva("Digite o sexto numero: ")
   leia(num6)
   se(num6 >= 10) E (num6 <= 150) entao
      maiores := maiores + 1
   fimse

   escreva("Digite o sétimo numero: ")
   leia(num7)
   se(num7 >= 10) E (num7 <= 150) entao
      maiores := maiores + 1
   fimse

   escreva("Digite o oitavo numero: ")
   leia(num8)
   se(num8 >= 10) E (num8 <= 150) entao
      maiores := maiores + 1
   fimse

   escreva("Digite o nono numero: ")
   leia(num9)
   se(num9 >= 10) E (num9 <= 150) entao
      maiores := maiores + 1
   fimse

   escreva("Digite o décimo numero: ")
   leia(num10)
   se(num10 >= 10) E (num10 <= 150) entao
      maiores := maiores + 1
   fimse
   escreval
   
   escreval("Há", maiores, " numeros dentro do intervalo")
   
Fimalgoritmo