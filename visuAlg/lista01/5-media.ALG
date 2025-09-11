Algoritmo "media"
// Escrever um algoritmo que leia o nome de um aluno e as notas das três
// provas que ele obteve no semestre. No final informar o nome do aluno
// e a sua média (aritmética).
Var
aluno :caracter
nota1 :real
nota2 :real
nota3 :real
soma :real
media :real


Inicio
escreva("digite o nome do aluno: ")
leia(aluno)
escreva("digite a nota da primeira prova: ")
leia(nota1)
escreva("digite a nota da segunda prova: ")
leia(nota2)
escreva("digite a nota da terceira prova: ")
leia(nota3)

soma := nota1 + nota2 + nota3
media := soma / 3

escreva("O aluno ", aluno, " obteve a media ", media:1:2)

Fimalgoritmo