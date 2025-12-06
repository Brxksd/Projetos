import math

ca = float(input('Digite o comprimendo do cateto adjacente\n-> '))
co = float(input('Digite o comprimento do cateto oposto\n-> '))

hip = math.sqrt((math.pow(ca,2) + math.pow(co,2)))

print('A hipotenusa tem comprimento de {:.2f}.'.format(hip))
