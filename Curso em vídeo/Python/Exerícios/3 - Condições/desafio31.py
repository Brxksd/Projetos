d = float(input('Qual é a distância em Km da sua viagem?\n-> '))

if d > 200 :
    print('O valor da sua viagem é de R${:2}.'.format(d*0.45))
else :
    print('O valor da sua viagem é de R${:2}.'.format(d*0.5))
