"""
Problema: https://thehuxley.com/problem/4095
Autor: Willians Fernando de Oliveira
Criado em 21/11/2022 às 21:49
"""

from math import pow, sqrt

def calculaDelta(a,b,c):
  return pow(b,2)-4*a*c

def calculaRaizes(a,b,c):
  if a == 0:
    return 'Impossivel calcular'
  else:
    try:
      delta = calculaDelta(a,b,c)
      raizes = []
      raizes.append((-b+sqrt(delta))/(2*a))
      raizes.append((-b-sqrt(delta))/(2*a))
      return f'X1 = {raizes[0]:.5f}\nX2 = {raizes[1]:.5f}'
    except ValueError:
      return 'Impossivel calcular'
  
print('Digite os coeficientes da equacao:')
coef = list(float(i) for i in input().split())
print(calculaRaizes(coef[0],coef[1],coef[2]))
