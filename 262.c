/*
Problema: https://thehuxley.com/problem/262
Autor: Willians Fernando de Oliveira
Criado em 08/09/2020 às 15:32
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 20000

int main()
{
    int i = 0,contInferior = 0, contSuperior = 0, n = 0, num[TAM];
    float media = 0;

    scanf("%d",&n);

    for (i = 0; i < n; i++){
        scanf("%d",&num[i]);
        media += num[i];
    }

    media = media/n;

    for (i = 0; i < n; i++){
        if (num[i] > media+0.10*media){
            contSuperior += 1;
        } else if (num[i] < media-0.10*media){
            contInferior += 1;
        }
    }

    printf("%.2f\n%d\n%d\n",media,contSuperior,contInferior);

    return 0;
}
