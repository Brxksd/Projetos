from random import randint, shuffle

a1 = input('Nome do aluno 1\n-> ')
a2 = input('Nome do aluno 2\n-> ')
a3 = input('Nome do aluno 3\n-> ')
a4 = input('Nome do aluno 4\n-> ')

alunos = [a1, a2, a3, a4]

shuffle(alunos)

print('A ordem ficou em {}.'.format(alunos))
