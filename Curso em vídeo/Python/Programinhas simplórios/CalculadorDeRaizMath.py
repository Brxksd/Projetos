# Prática pra ver como funciona uma biblioteca
import math
num = int(input('Digite um número\n-> '))
raiz = math.sqrt(num)
print('A raiz quadrada de {} é {}.\n'.format(num,raiz))
# Se quizer a raiz arredondada:
# print('A raiz quadrada arredondada de {} é {}.'.format(num,math.ceil(raiz)))