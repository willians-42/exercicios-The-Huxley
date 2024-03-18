/*
Problema: https://thehuxley.com/problem/2131
Autor: Willians Fernando de Oliveira
Criado em 09/09/2020 às 00:42
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p = 0, e = 0, i = 0, j = 0, mat[100][100], x = 0;

    scanf ("%d%d", &p, &e);

    for (i = 0; i < e; i++) {
        for (j = 0; j < p; j++){
            scanf ("%d", &mat[j][i]);
        }
    }

    for (i = 0; i < p; i++) {
        for (j = 0; j < e; j++){
            if (mat[i][j] == 1){
                x += 1;
            }
        }
        printf("Princesa %d: %d voto(s)\n", i + 1, x);
        x = 0;

    }
	return 0;
}
