Algoritmo "Ordenador Descrescente"
// Fazer um algoritmo que leia 4 valores (A,B,C,D) e mostre-os na ordem lida.
// Em seguida, ordene-os em ordem decrescente e mostre-os novamente,
// já ordenados.
Var
   A, B, C, D, temp :inteiro
Inicio
   escreva("Digite o primeiro numero: ")
   leia(A)
   escreva("Digite o segundo numero: ")
   leia(B)
   escreva("Digite o terceiro numero: ")
   leia(C)
   escreva("Digite o quarto numero: ")
   leia(D)

   escreval
   escreval(A, B, C, D)

   repita
      se(A <= B)entao
         temp := A
         A := B
         B := temp
      fimse

      se(B <= C)entao
         temp := B
         B := C
         C := temp
      fimse

      se(C <= D)entao
         temp := C
         C := D
         D := temp
      fimse

   ate((A >= B) E (B >= C) E (C >= D))

   escreval(A, B, C, D)
Fimalgoritmo