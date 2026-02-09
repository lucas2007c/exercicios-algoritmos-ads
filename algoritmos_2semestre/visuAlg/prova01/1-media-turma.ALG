Algoritmo "Analisador de notas com conceito final"
// Um professor quer um programa onde ele insira as notas de uma turma
// (quantidade de alunos é informada no início).
// Ao final, o programa deve:
// Mostrar média geral da turma
// Mostrar o percentual de alunos em cada conceito, considerando:
// Classificação geral por conceito (A, B, C...)
// A - 8 = nota = 10
// B - 6 = nota < 8
// C - 4 = nota < 6
// D - 0 = nota < 4
Var
   qtdAlunos :inteiro
   notaAluno, somaTotalNotas, mediaGeral :real
   qtdA, qtdB, qtdC, qtdD :real
   i :inteiro

Inicio
   Escreva("Insira quantos alunos há na sala: ")
   leia(qtdAlunos)

   para i de 1 ate qtdAlunos passo 1 faca
        escreva("Insira a nota do", i, "º aluno: ")
        leia(notaAluno)
        somaTotalNotas := somaTotalNotas + notaAluno
        
        se((notaAluno >= 8) E (notaAluno <= 10))entao
        qtdA := qtdA + 1
        fimse
        
        se((notaAluno >= 6) E (notaAluno < 8))entao
        qtdB := qtdB + 1
        fimse
        
        se((notaAluno >= 4) E (notaAluno < 6))entao
        qtdC := qtdC + 1
        fimse
        
        se((notaAluno >= 0) E (notaAluno < 4))entao
        qtdD := qtdD + 1
        fimse
   fimpara
   escreval
   
   qtdA := (qtdA / qtdAlunos) * 100
   qtdB := (qtdB / qtdAlunos) * 100
   qtdC := (qtdC / qtdAlunos) * 100
   qtdD := (qtdD / qtdAlunos) * 100
   
   mediaGeral := somaTotalNotas / qtdAlunos
   escreval("A media geral da sala é: ", mediaGeral:1:1)
   escreval("Conceito A: ", qtdA:1:1, "%")
   escreval("Conceito B: ", qtdB:1:1, "%")
   escreval("Conceito C: ", qtdC:1:1, "%")
   escreval("Conceito D: ", qtdD:1:1, "%")

Fimalgoritmo