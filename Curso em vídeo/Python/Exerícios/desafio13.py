# s = salário atual | sn = salário pós-aumento

s = float(input('Qual é o salário atual do empregado?\n-> '))

sn = (s/100 * 15) + s

print('No futuro, o empregado passará a ter um salário de R${:.2f} devido a um aumento de 15%.'.format(sn))
