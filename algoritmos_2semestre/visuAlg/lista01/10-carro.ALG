Algoritmo "semnome"
// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
// percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos
// sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o
// resultado). Supondo que a percentagem do
// distribuidor seja de 28% e os impostos 45%. Escrever um algoritmo que leia
// o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.
Var
fabrica :real
Impostos :real
fabricaComImpostos :real
distribuidor :real
consumidor: real
ImpostosTotais :real

Inicio
escreva("digite o valor de fabrica do carro: ")
leia(fabrica)
escreval

impostos := fabrica * 0.45
fabricaComImpostos := fabrica + impostos

distribuidor := fabricaComImpostos * 0.28
consumidor := fabricaComImpostos + distribuidor

impostosTotais := impostos + distribuidor

escreval("O valor final do carro ficou em R$", consumidor:1:2)
escreval("Voce esta pagando R$ ", impostos:1:2, " de impostos")
escreval("E R$ ", distribuidor:1:2, " para o distribuidor")
escreval("com um total de R$", impostosTotais:1:2 , " de impostos")

Fimalgoritmo