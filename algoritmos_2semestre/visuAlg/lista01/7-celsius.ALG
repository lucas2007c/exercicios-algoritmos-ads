Algoritmo "Celsius para Fahrenheit"
// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
// Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a
// temperatura em Fahrenheit e C a temperatura em Celsius.
Var
celsius :real
fah :real

Inicio
escreva("Digite a temperatura em celsius: ")
leia(celsius)

fah := (9*celsius + 160) / 5

escreval("A temperatura em Fahrenheit eh: ", fah:6:2)

Fimalgoritmo