# c = temperatura em Celsius | f = temperatura em Farenheint

c = float(input('Digite a temperatura em ºC (Celsius) que deseja converter\n-> '))

f = (c * 9/5) + 32

print('A conversão de {}ºC para ºF resulta em: {:.2f}ºF'.format(c,f))
