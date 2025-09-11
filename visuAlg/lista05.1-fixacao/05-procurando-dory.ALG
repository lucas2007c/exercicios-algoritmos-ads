Algoritmo "Algoritmo para emissora"
// No dia da estreia do filme "Procurando Dory", uma grande emissora de
// TV realizou uma pesquisa logo após o encerramento do filme. Cada
// espectador respondeu a um questionário no qual constava sua idade e a
// sua opinião em relação ao filme: Excelente-3; Bom-2; Regular-1.
// Criar um programa que recebe a idade e a opinião de 20 espectadores,
// calcula e imprime:
// • A média das idades das pessoas que responderam excelente;
// • A quantidade de pessoas que responderam regular;
// • A percentagem de pessoas que responderam bom entre todos os
// expectadores analisados.
Var
   i, n :inteiro
   idade :inteiro
   opniao :inteiro
   mediaIdade :real
   qtdRegular, qtdExcelente :inteiro
   porcentagemBom :real
Inicio
   n := 20
   para i de 1 ate n passo 1 faca
      aleatorio 5,68
      escreva("Digite a sua idade: ")
      leia(idade)
      aleatorio off
      repita
         escreval("3-Excelente")
         escreval("2-Bom")
         escreval("1-Regular")
         escreva("de 1 a 3, quanto você gostou do filme?: ")
         aleatorio 1,3
         leia(opniao)
         aleatorio off

         se((opniao < 1) ou (opniao > 3))entao
            escreval("Opção inválida.")
            escreval
         fimse
      ate ((opniao >= 1) E (opniao <= 3))

      escolha opniao
      caso 1
         qtdRegular := qtdRegular + 1
      caso 2
         porcentagemBom := porcentagemBom + 1
      caso 3
         mediaIdade := mediaIdade + idade
         qtdExcelente := qtdExcelente + 1
      fimescolha
      escreval
   fimpara

   escreval
   // garantindo que não vai dividir por 0, se não a IDE para de funcionar
   se(qtdExcelente > 1)entao
      mediaIdade := mediaIdade / qtdExcelente
   senao
      mediaIdade := 0
   fimse
   escreval("A media de idade das pessoas que mais gostaram do filme é: ", mediaIdade:1:0)

   escreval("A quantidade de pessoas que escolheu Regular foi: ", qtdRegular)

   porcentagemBom := (porcentagemBom / n) * 100
   escreval("Um total de ", porcentagemBom:1:1, "% de pessoas acharam o filme bom.")


Fimalgoritmo