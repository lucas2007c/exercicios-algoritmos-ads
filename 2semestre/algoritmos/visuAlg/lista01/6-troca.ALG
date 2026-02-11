Algoritmo "Troca de variaveis"
// Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores
// de forma que a variável A passe a possuir o valor da variável B e a
// variável B passe a possuir o valor da variável A. Apresentar os valores
// trocados.
Var
variavelA :caracter
variavelB :caracter
variavelC :caracter

Inicio
escreva("Digite a variavel A: ")
leia(variavelA)
escreva("Digite a variavel B:")
leia(variavelB)
escreval
// VariavelC guarda o valor da variavel A para não ser perdido
variavelC := variavelA

variavelA := variavelB
variavelB := variavelC

escreval("Variavel A: ", variavelA)
escreval("Variavel B: ", variavelB)

Fimalgoritmo