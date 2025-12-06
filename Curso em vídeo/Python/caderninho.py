# ==============================================================

#  Aqui, deixarei os meus rascunhos de códigos e testes que podem
#  ser rodados quando retirados os '#' entre as "páginas".
#  Quando tem '##', é uma anotação.

# ==============================================================

## Bibliotecas em Python

# --------------------------------------------------------------

# import math # importará TODA a biblioteca math
# from math import sqrt # importará APENAS a função sqrt da biblioteca

## Algumas funções da biblioteca math:


## sqrt | Calcular a raiz quadrada de um número
## hypot | Calcular a hipotenusa de um triangulo, levando como
##    parâmetros o cateto oposto e o cateto adjacente

## ceil | Arredondar um número para cima
## floor | Arredondar um número para baixo

## pow | Fazer a potência de um número por X valor
## factorial | Calcular o fatorial de um número

## trunc | "Truncar" um número, eliminando tudo que tiver da 
##    vírgula pra frente, ou seja, vai mostrar a parte inteira

# --------------------------------------------------------------

## import random

## random | Escolhe um número real aleatório
## randint | Escolhe um número inteiro aleatório

## choice | Escolhe um elemento aleatório de uma lista
## shuffle | Mistura os elementos de uma lista

# ==============================================================

## STRINGS

# frase[9] | Vai retornar o caractere da string "frase" na 
#    posição 9
# frase[9:13] | Vai retornar os caracteres da string "frase"
#    entre a posição 9 até 12 (subtrai 1 do limite final)
# frase[9:21:2] | Vai retornar os caracteres da string 
#    "frase" da posição 9 até 20 pulando de 2 em 2
# frase[:5] | Vai retornar os caracteres da string "frase" da 
#    posição 0 até 4
# frase[8:] | Vai retornar os caracteres da string "frase" da 
#    posição 8 até o final
# frase[9::3] | Vai retornar os caracteres da string "frase" 
#    da posição 9 até o final pulando de 3 em 3
# frase.count('o') | Vai contar quantas vezes aparece a letra 
#    "o" na string "frase"
# frase.count('o',0,13) | Vai contar quantas vezes aparece a 
#    letra "o" da posição 0 até 12 da string "frase"
# frase.find('deo') | Vai encontrar a posição na string que 
#    começa a frase "deo"
# frase.replace('Python','Android') | Vai substituir por Android 
#    onde ocorre "Python" na string "frase"
# frase.upper() | O que não estiver em maiúsculo na string "frase" 
#    vai ficar maiúsculo
# frase.lower() | O que não estiver em minúsculo na string "frase" 
#    vai ficar minúsculo
# frase.capitalize() | Vai pegar toda a string "frase" e deixa-la
#    minúscula, para colocar a primeira letra da string toda em 
#    maiúscula
# frase.title() | Vai pegar toda a string "frase" e deixa-la
#    minúscula, para colocar a primeira letra de cada palavra em
#    maiúscula
# frase.strip() | Vai excluir os espaços vazios no final da string 
#    "frase"
# frase.rstrip() | Vai excluir os espaços vazios no começo da string 
#    "frase"
# frase.lstrip() | Vai excluir os espaços vazios no começo e final 
#    da string "frase"
# frase.split() | Vai quebrar uma string em seus espaços vazios e 
#    criará uma lista com as palavras que estavam dentro da string
# 'Curso' in frase | Vai verificar se existe "Curso" na string 
#    "frase", retornando TRUE ou FALSE
# len(frase) | Retorna o comprimento da string "frase"
# '-'.join(frase) | Vai criar uma string "frase" contendo a junção 
#    das palavras presentes na lista e separa-las por "-" 

# ==============================================================

# num1 = int(input('Digite o 1º número\n->'))
# num2 = int(input('\nDigite o 2º número\n->'))
# s = num1 + num2

# print('A soma de {} e {} é {}.'.format(num1, num2, s)) 

# ==============================================================

# n = bool(input('Digite um número\n-> '))
# print('\nResult:',n)

# ==============================================================

## Aqui eu estou vendo ordem de procedimentos aritméticos:         
##   1º (), [], {}                                              
##   2º **                                                      
##   3º *, /, //, %                                             
##   4º +, -                                                    

# print(5+4**5+(32//4)-3)

# ==============================================================

## Como fazer raiz quadrada em Python:

# n = int(input("Digite um número\n->"))
# raiz = n**0.5
# print('Raiz de {}: {}'.format(n,raiz))

# ==============================================================

