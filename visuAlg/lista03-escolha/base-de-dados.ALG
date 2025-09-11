Algoritmo "Base de dados"
// Crie um programa que exiba o seguinte menu:
// Base de dados
//Digite:
// 1- para consultar
// 2- para cadastrar
// 3- para editar
// 4- para excluir
// 5- para listar Todos
// assim que o usuário digitar uma opção, exiba na tela a mensagem:
// Você selecionou: <<opção>>
// caso o usuário digite um número diferente dos disponíveis no menu,
// exibir a mensagem: Opção Incorreta !
Var
   opcao :inteiro

Inicio
   escreval("Base de Dados")
   escreval("Digite: ")
   escreval("1- Para Consultar")
   escreval("2- Para Cadastrar")
   escreval("3- Para Editar")
   escreval("4- Para Excluir")
   escreval("5- Para Listar Todos")
   escreva("Digite sua escolha: ")
   leia(opcao)

   escolha opcao
   caso 1
      escreval("Você escolheu: Consultar")
   caso 2
      escreval("Você escolheu: Cadastrar")
   caso 3
      escreval("Você escolheu: Editar")
   caso 4
      escreval("Você escolheu: Excluir")
   caso 5
      escreval("Você escolheu: Listar Todos")
   outrocaso
      escreval("Opção incorreta. Escolha uma das opções disponíveis!")
   fimescolha

Fimalgoritmo