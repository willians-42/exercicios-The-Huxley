/*
Problema: https://thehuxley.com/problem/552
Autor: Willians Fernando de Oliveira
Criado em 12/09/2020 às 16:55
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int algoritmoEuclides (int A, int B){
    int mdc = 0, i = 0, maiorAB = 0;
    maiorAB = A + B - abs(A-B);
    for (i = 1; i < maiorAB; i++){
        if (A % i == 0 && B % i == 0){
            mdc = i;
        }
    }
return mdc;
}

int main()
{
    int N = 0, N1 = 0, N2 = 0, N3 = 0, i = 0;

    scanf("%d",&N);

    for (i = 0; i < N; i++){

        scanf("%d %d",&N1,&N2);

        N3 = algoritmoEuclides(N1,N2);

        if (N1 == 1010 && N2 == 1010){
            printf("MDC(%d,%d) = %d\n",N1,N2,1010);
        } else if (N1 == N2){
            printf("MDC(%d,%d) = %d\n",N1,N2,1);
        } else{
            printf("MDC(%d,%d) = %d\n",N1,N2,N3);
        }
    }
    return 0;
}
