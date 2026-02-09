Algoritmo "Calculadora de IMC com faixa de classificação"
// Leia peso e altura do usuário e calcule o IMC. Exiba o índice e
// classifique como:
// Abaixo do peso (<18.5)
// Peso normal (18.5–24.9)
// Sobrepeso (25–29.9)
// Obesidade (=30)
Var
   peso, altura, imc :real
   classificacao :caracter
Inicio
   escreval("Digite o seu peso(em Kg): ")
   leia(peso)

   escreval("Digite a sua altura(em metros): ")
   leia(altura)
   
   escreval

   imc := peso / (altura * altura)
   escreval("IMC: ", imc:1:1)

   se(imc < 18.5)entao
      classificacao := "Abaixo do peso"
   fimse

   se(imc >= 18.5) E (imc <= 24.9)entao
      classificacao := "Peso normal"
   fimse

   se(imc >= 25) E (imc <= 29.9)entao
      classificacao := "Sobrepeso"
   fimse

   se(imc >= 30)entao
      classificacao := "Obesidade"
   fimse

   escreval("Você está classificado(a) com: ", classificacao)

Fimalgoritmo