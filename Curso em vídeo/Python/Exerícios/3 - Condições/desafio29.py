v = float(input('Qual é a velocidade do carro?\n-> '))

if v > 80.0 :
    print('Você está acima da velocidade, e foi multado no valor de R${}!!'.format((v-80)*7.00))
else :
    exit()
