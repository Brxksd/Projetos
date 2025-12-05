# p = preço antigo | pd = preço com disconto

p = float(input('Digite o preço do produto\n-> '))

pd = (p/100) * 95

print('\nDesconto aplicado com sucesso!\nNovo preço: R${:.2f}.'.format(pd))
