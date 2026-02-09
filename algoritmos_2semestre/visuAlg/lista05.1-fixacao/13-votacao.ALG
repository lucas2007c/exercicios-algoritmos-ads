Algoritmo "semnome"
//Em uma eleição presidencial existem quatro candidatos. Os votos são
// informados através de códigos. Os dados utilizados para a contagem dos
// votos obedecem à seguinte codificação:
// - 1,2,3,4 = voto para os respectivos candidatos;
// - 5 = voto nulo;
// - 6 = voto em branco;
// Elabore um algoritmo que leia o código do candidato em um voto. Calcule e
// escreva:
// - total de votos para cada candidato;
// - total de votos nulos;
// - total de votos em branco;
Var
   cand1, cand2, cand3, cand4 :inteiro
   nulo, branco :inteiro
   voto :inteiro
Inicio
   repita
   escreval("-- Eleições 2026 --")
      escreval("1-Nikolas Ferreira")
      escreval("2-Rodrigo Manga")
      escreval("3-Gustavo Lima")
      escreval("4-Naldo")
      escreval("5-Voto Nulo")
      escreval("6-Voto Branco")
      escreval("0-Encerrar Votação")
      escreva("Digite seu voto: ")
      leia(voto)

      escolha voto
      caso 1
         cand1 := cand1 + 1
      caso 2
         cand2 := cand2 + 1
      caso 3
         cand3 := cand3 + 1
      caso 4
         cand4 := cand4 + 1
      caso 5
         nulo := nulo + 1
      caso 6
         branco := branco + 1
      outrocaso
         escreval("Voto inválido")
      fimescolha
      escreval
   ate(voto = 0)
   
   escreval("A quantidade total de votos foi: ")
   escreval
   escreval("Candidato 1:", cand1)
   escreval("Candidato 2:", cand2)
   escreval("Candidato 3:", cand3)
   escreval("Candidato 4:", cand4)
   escreval("Votos Nulos:", nulo)
   escreval("Votos em Branco:", branco)

Fimalgoritmo