y = int(input('Digite um ano\n-> '))

if y % 4 == 0 and y % 100 != 0 :
    print('{} é um ano bissexto.'.format(y))
elif y % 400 == 0 :
    print('{} é um ano bissexto.'.format(y))
else :
    print('{} não é um ano bissexto.'.format(y))
