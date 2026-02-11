Algoritmo "calcular salario"
// Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo
// e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que
// este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
// informar o seu nome, o salário fixo e salário no final do mês.
Var
vendedor :caracter
salarioFixo :real
totalVendas :real
salarioFinal :real

Inicio
escreva("Digite o nome do vendedor: ")
leia(vendedor)
escreva("Digite o salario fixo do vendedor: ")
leia(salarioFixo)
escreva("Digite o total de vendas do vendedor (em R$): ")
leia(totalVendas)
escreval

salarioFinal := salarioFixo + (totalVendas * 0.15)

escreval("Vendedor: ", vendedor)
escreval("Salario Fixo: ", salarioFixo:1:2)
escreval("Salario Final: ", salarioFinal:1:2)


Fimalgoritmo