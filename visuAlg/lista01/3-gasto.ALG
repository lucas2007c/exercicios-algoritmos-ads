Algoritmo "consumo medio de automovel"
// Escrever um algoritmo para determinar o consumo médio de um automóvel
// sendo fornecida a distância total percorrida pelo automóvel e o total
// de combustível gasto.
Var
distancia :real
combustivel :real
consumo :real

Inicio
escreva("Digite a distancia percorrida (em km): ")
leia(distancia)
escreva("Digite a quantidade combustivel gasto (em litros): ")
leia(combustivel)
escreval

consumo := combustivel / distancia

escreval("o consumo medio do automovel eh de ", consumo:1:2 ," litros por km")


Fimalgoritmo