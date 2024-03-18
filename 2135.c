/*
Problema: https://thehuxley.com/problem/2135
Autor: Willians Fernando de Oliveira
Criado em 08/09/2020 às 23:13
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n1 = 0, n2 = 0, i = 0;

    scanf("%d",&n1);

    if (n1 == 0){
        printf("Erro - A lista deve ter pelo menos 1 elemento.\n");
        exit(0);
    }

    int vet1[n1];

    for (i = 0; i < n1; i++){
        scanf("%d",&vet1[i]);
    }

    scanf("%d",&n2);

    if (n2 == 0){
        printf("Erro - A lista deve ter pelo menos 1 elemento.\n");
        exit(0);
    }

    int vet2[n2];

     for (i = 0; i < n2; i++){
        scanf("%d",&vet2[i]);
    }

    int vet3[n1+n2];

    if (n1 < n2){
        for (i = 0; i < n1; i++){
            vet3[i] = vet1[i];
        }

        for (i = n1; i < n1+n2; i++){
            vet3[i] = vet2[i-n1];
        }
    } else {
        for (i = 0; i < n2; i++){
            vet3[i] = vet2[i];
        }

        for (i = n2; i < n1+n2; i++){
            vet3[i] = vet1[i-n2];
        }

    }

    for (i = 0; i < n1+n2;i++){

        if (i == (n1+n2-1)){
            printf("%d\n",vet3[i]);
        } else {
            printf("%d ",vet3[i]);
        }
    }

    return 0;
}
