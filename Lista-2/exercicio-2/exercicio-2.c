#include <stdio.h>
#include "exercicio-2-funcoes.h"

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

    return 0;
}