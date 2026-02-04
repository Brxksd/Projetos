from random import randint

a1 = input('Nome do aluno 1\n-> ')
a2 = input('Nome do aluno 2\n-> ')
a3 = input('Nome do aluno 3\n-> ')
a4 = input('Nome do aluno 4\n-> ')

ch = randint(1, 4)

if ch == 1:
    print('\nO aluno escolhido foi:\n{}.'.format(a1))
elif ch == 2:
    print('\nO aluno escolhido foi:\n{}.'.format(a2))
elif ch == 3:
    print('\nO aluno escolhido foi:\n{}.'.format(a3))
else:
    print('\nO aluno escolhido foi:\n{}.'.format(a4))
