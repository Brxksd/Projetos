from math import radians, sin, cos, tan

ang = int(input('Digite um ângulo\n-> '))

sin = sin(radians(ang))
cos = cos(radians(ang))
tan = tan(radians(ang))

print('Dados do ângulo {}:\nSeno = {:.2f}\nCosseno = {:.2f}\nTangente = {:.2f}'.format(ang,sin,cos,tan))
