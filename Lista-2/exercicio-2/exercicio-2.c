#include <stdio.h>
#include "exercicio-2-funcoes.h"

void multiplica(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3], int n);

int main()
{
    //Declaração das matrizes calculadas
    float A[3][3] = {
        {0.4, 0.5, 0.1},
        {0.3, 0.4, 0.3},
        {0.2, 0.3, 0.5}
    };

    float B[3][3] = {
        {0.1, 0.5, 0.7},
        {0.2, 0.5, 0.1},
        {0.3, 0.1, 0.9}
    };

    //Declaração do expoente n:
    int n = 3; 

    //Declaração da matriz C de resultado:
    float C[3][3]; 

    multiplica(A, B, C, n); //C = (A * B)^n

    //Impressão da matriz C:
    printf("\nMatriz C:\n");
    impressaoMatriz(C);

    return 0;
}

void multiplica(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3], int n) {
    //Primeiro multiplica as matrizes A e B, armazenando o resultado na matriz C: 
    multiplicacaoMatrizes(matrizA, matrizB, matrizC);

    float matrizAux[3][3];

    //Depois eleva a matriz C ao expoente n:
    elevaMatriz(matrizC, matrizAux, n);
    copiaMatriz(matrizAux, matrizC);
}