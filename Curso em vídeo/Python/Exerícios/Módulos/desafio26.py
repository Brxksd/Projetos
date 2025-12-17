frase = str(input('Digite uma frase:\n-> '))

num = frase.count('a') + frase.count('A')
pri = frase.lower().find('a')
ul = frase.lower().rfind('a')

print('\nA letra "a" aparece um total de {} vezes.\nSua primeira posição é {} e sua última é {}.\n'.format(num,pri,ul))
