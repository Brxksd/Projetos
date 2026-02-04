num = int(input('Digite um número entre 0 e 9999 (use o formato XXXX):\n-> '))

u = num // 1 % 10
d = num // 10 % 10
c = num // 100 % 10
m = num // 1000 % 10

print('\nUnidade: {}\nDezena: {}\nCentena: {}\nMilhar: {}\n'.format(u,d,c,m))
