# -*- coding: utf-8 -*-
"""
Problema: https://www.thehuxley.com/problem/1118
Autor: Willians Fernando de Oliveira
Criado em 25/02/2021 as 11:30
"""

import sys

a, b = int(input()), int(input())
x, y, z = input(), input(), input()
if a > len(x) or b > len(x) or a <= 0 or b <= 0:
    print("TAMANHO INVALIDO")
    sys.exit(0)
print(x[0:a].upper(),":")
print(x[0:a] + y)
print(x[0:a] + z)
print()
print(x[b:].upper(), ":")
print(y + x[b:] )
print(z + x[b:])
