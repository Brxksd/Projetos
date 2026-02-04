from random import randint
from playsound import playsound

nS = randint(0,5)

nC = int(input('Digite um número de 0 a 5, se você acertar ganhará um prêmio!\n-> '))

if nC == nS :
    print('Você ganhou!! Parabéns!!')
    playsound('Curso em vídeo/Python/Músicas/roblox-congrats.mp3')
else :
    print('Ops, você errou! O computador venceu :(')
