Algoritmo "situacao do aluno"
// Escrever um algoritmo que leia o nome e as três notas obtidas por um aluno
// durante o semestre. Calcular a sua média (aritmética), informar o nome e
// sua menção aprovado (media >= 6), Reprovado (media < 4) e IFA (media >= 4
// E media < 6).
Var
   aluno :caracter
   nota1, nota2, nota3 :real
   media :real
   situacao :caracter

Inicio
   escreva("digite o nome do aluno: ")
   leia(aluno)
   escreva("digite a nota da primeira prova: ")
   leia(nota1)
   escreva("digite a nota da segunda prova: ")
   leia(nota2)
   escreva("digite a nota da terceira prova: ")
   leia(nota3)

   media := (nota1 + nota2 + nota3) / 3

   se(media >= 6)entao
      situacao := "aprovado"
   fimse

   se (media < 4)entao
      situacao := "reprovado"
   fimse

   se(media >= 4) E (media < 6)entao
      situacao := "IFA"
   fimse

   escreva("A situacao do aluno ", aluno, " eh: ", situacao)

Fimalgoritmo