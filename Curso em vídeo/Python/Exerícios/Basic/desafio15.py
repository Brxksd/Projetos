# d = dias | k = kilometros | s = saldo devedor

d = int(input('\nQuantos dias o cliente ficou com o veículo?\n-> '))
k = float(input('Quantos kilometros o cliente andou no veículo?\n-> '))

sd = (60 * d + 0.15 * k)

print('O valor total que o cliente tem de pagar é de R${:.2f}.'.format(sd))
