%{
  Problema: https://thehuxley.com/problem/2637?locale=pt_BR
  Autor: Willians Fernando de Oliveira
  Criado em 21/08/2021 as 17:50 
%}

clear data;
clear all;
clc;

x = []; s = false; y = 0;
for i = 1:6
  printf('Digite pontuacao da partida %d:\n',i);
  x(end+1) = input('');
  if x(i) < 0
    s = true;
  else
    y += x(i);
  endif
endfor
if s == true
  printf('Valores negativos nao sao permitidos.\n')
else
  if y >= 100
    printf('Total de pontos: %g. O competidor esta classificado.\n',y);
  else
    printf('Total de pontos: %g. O competidor esta desclassificado.\n',y);
  endif
endif
