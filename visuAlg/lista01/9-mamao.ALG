Algoritmo "Mamao"
// A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações
// sem juros. Faça um algoritmo que receba um valor de uma compra e mostre o
// valor das prestações.
Var
qtdPrestacoes :inteiro
valorProduto :real
valorPrestacoes :real

Inicio
escreva("digite o valor do produto: ")
leia(valorProduto)
escreva("Em quantas prestacoes deseja parcelar: ")
leia(qtdPrestacoes)
escreval

valorPrestacoes := valorProduto / qtdPrestacoes

escreval("Voce pagara", qtdPrestacoes, " Prestacoes de R$", valorPrestacoes:1:2)
Fimalgoritmo