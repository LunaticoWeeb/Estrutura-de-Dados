#include <stdio.h>
#include "matrizes.h"

int main()
{
    //Declaração das matrizes calculadas
    float A[3][4] = {
        {0.4, 0.5, 0.1, 0.0},
        {0.3, 0.4, 0.3, 0.5},
        {0.2, 0.3, 0.5, 0.1},
    };

    float B[4][3] = {
        {0.1, 0.5, 0.7},
        {0.2, 0.5, 0.1},
        {0.3, 0.1, 0.9},
        {0.4, 0.1, 0.1}
    };

    //Declaração do expoente n:
    int n = 3; 

    //Declaração da matriz C de resultado:
    float C[3][3];

    multiplica_e_eleva(3, 4, A, 4, 3, B, C, n); //C = (A * B)^n

    //Impressão da matriz C:
    printf("\nMatriz C:\n");
    impressaoMatriz(3, 3, C);

    //Declaração matrizes para a soma:
    float D[2][6] = {
        {0.1, 0.2, 0.3, 0.4, 0.5, 0.6},
        {0.2, 0.3, 0.4, 0.5, 0.6, 0.7}
    };

    float E[2][6] = {
        {0.4, 0.2, 0.3, 0.4, 0.5, 0.6},
        {0.2, 3, 0.4, 5, 0.65, 0.7}
    };

    //Declaração da matriz F de resultado:
    float F[2][6];

    somaMatrizes(2, 6, D, E, F); //F = D + E

    //Impressão da matriz F:
    printf("\nMatriz F:\n");
    impressaoMatriz(2, 6, F);

    //Declaração da matriz G de resultado:
    float G[2][6];

    subtraiMatrizes(2, 6, D, E, G); //G = D - E

    //Impressão da matriz G:
    printf("\nMatriz G:\n");
    impressaoMatriz(2, 6, G);

    return 0;
}