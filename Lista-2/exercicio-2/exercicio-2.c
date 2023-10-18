#include <stdio.h>
#include "matrizes.h"

int main()
{
    MATRIZ *matrizA = criaMatriz(2, 2);
    MATRIZ *matrizB = criaMatriz(2, 2);

    matrizA->matriz[0][0] = 1;
    matrizA->matriz[0][1] = 2;
    matrizA->matriz[1][0] = 3;
    matrizA->matriz[1][1] = 4;
    
    matrizB->matriz[0][0] = 5;
    matrizB->matriz[0][1] = 6;
    matrizB->matriz[1][0] = 7;
    matrizB->matriz[1][1] = 8;

    printf("Matriz A:\n");
    for (int i = 0; i < matrizA->linhas; i++)
    {
        printf("[");
        for (int j = 0; j < matrizA->colunas; j++)
        {
            printf("%.6f", matrizA->matriz[i][j]);
            if (j < matrizA->colunas - 1)
            {
                printf(", ");
            }
        }
        printf("]\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < matrizB->linhas; i++)
    {
        printf("[");
        for (int j = 0; j < matrizB->colunas; j++)
        {
            printf("%.6f", matrizB->matriz[i][j]);
            if (j < matrizB->colunas - 1)
            {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}