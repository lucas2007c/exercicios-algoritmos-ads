Algoritmo "Dolar para real"
// Elaborar um algoritmo que efetue a apresentação do valor da conversão em
// real (R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o
// valor da cotação do dólar e também a quantidade de dólares disponíveis com o
// usuário.
Var
dolares :real
cotacao :real
reais :real

Inicio
escreva("Digite quantos dolares voce possui: ")
leia(dolares)
escreva("Digite a cotacao atual do dolar: ")
leia(cotacao)
escreval

reais := dolares / cotacao

escreval("Voce possui ", reais:2:2, " reais")

Fimalgoritmo