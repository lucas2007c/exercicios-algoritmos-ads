Algoritmo "total de homens e mulheres"
// Escrever um algoritmo que leia o nome e o sexo de 56 pessoas e
// informe o nome e se ela é homem ou mulher. No final informe total
// de homens e de mulheres.
Var
   nome :caracter
   sexo :caracter
   totalHomens,totalMulheres, totalInvalidos :inteiro
   i :inteiro

Inicio
   para i de 1 ate 56 passo 1 faça
      escreva("Digite o", i, "º Nome: ")
      leia(nome)
      escreva("Digite o seu sexo(M para masculino e F para feminino): ")
      leia(sexo)

      escolha sexo
      caso "M"
         totalHomens := totalHomens + 1
         escreval("Seu nome é ", nome, " e você é Homem")
      caso "F"
         totalMulheres := totalMulheres + 1
         escreval("Seu nome é ", nome, " e você é Mulher")
      outrocaso
         escreval("Sexo inválido. M e F devem ser maiúsculos!")
         totalInvalidos := totalInvalidos + 1
      fimescolha
   fimpara

   escreval("O total de homens é: ", totalHomens)
   escreval("O total de mulheres é: ", totalmulheres)
   escreval("O total de sexos inválidos é: ", totalInvalidos)

Fimalgoritmo