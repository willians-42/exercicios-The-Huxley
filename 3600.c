/*
Problema: https://thehuxley.com/problem/3600
Autor: Willians Fernando de Oliveira
Criado em 24/10/2021 as 23:15
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define AREA 11200

int main(){
    int b,t,f;
    scanf("%d %d",&b,&t);
    f = (t*70) + ((70*(b-t))/2);
    if (f == AREA/2)
        printf("0\n");
    else if (f > AREA/2) 
        printf("1\n");
    else if (f < AREA/2) 
        printf("2\n");
    return 0;
}
