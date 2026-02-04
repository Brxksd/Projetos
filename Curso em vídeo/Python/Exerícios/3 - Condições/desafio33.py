n1 = int(input('Digite o 1º número\n-> '))
n2 = int(input('Digite o 2º número\n-> '))
n3 = int(input('Digite o 3º número\n-> '))

if n1 >= n2 and n1 >= n3 :
    maior = n1
    menor = n2 if n2 < n3 else n3
elif n2 >= n1 and n2 >= n3 :
    maior = n2
    menor = n3 if n3 < n1 else n1
else :
    maior = n3
    menor = n1 if n1 < n2 else n2

print('O maior número é {} e o menor é {}.'.format(maior,menor))
