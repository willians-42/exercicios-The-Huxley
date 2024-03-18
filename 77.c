/*
Problema: https://thehuxley.com/problem/77
Autor: Willians Fernando de Oliveira
Criado em 08/09/2020 às 23:36
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    int n = 0, i = 0, j = 0, aux = 0;

    scanf("%d",&n);

    int vet[n];

    for (i = 0; i < n; i++){
        scanf("%d",&vet[i]);
    }

    for (j = 1; j < n; j++){
        for (i = 0; i < n-1; i++){
            if (vet[i] > vet[i+1]){
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
            }
        }
    }

    for (i = 0; i < n; i ++){
        if(i == n-1){
            printf("[%d]\n",vet[i]);
        } else {
            printf("[%d]",vet[i]);
        }
    }

    return 0;
}
