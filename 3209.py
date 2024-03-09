# -*- coding: utf-8 -*-
"""
Problema: https://www.thehuxley.com/problem/3209?locale=pt_BR
Autor: Willians Fernando de Oliveira
Criado em 02/03/2021 as 11:15
"""

t = int(input())
for i in range(t):
    a, b, m = input().split()
    a, b, m = int(a), int(b), int(m)
    print((a*b) % m)
