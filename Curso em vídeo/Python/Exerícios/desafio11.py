# l = largura | h = altura | a = área | t = litros de tinta

l = float(input('Qual é a largura da parede?\n-> '))
h = float(input('\nQual é a altura da parede?\n-> '))

a = l * h
t = a / 2

print('\nA área da parede é de {:.1f}m², e serão necessários {:.1f} litros de tinta para pinta-la completamente.'.format(a,t))
