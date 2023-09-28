#include <stdio.h>
#include "exercicio-2-funcoes.h"

void multiplica(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], float matrizC[linhas][colunas], int n);

int main()
{
    //Declaração das matrizes calculadas
    float A[4][4] = {
        {0.4, 0.5, 0.1, 0.0},
        {0.3, 0.4, 0.3, 0.5},
        {0.2, 0.3, 0.5, 0.1},
        {0.1, 0.1, 0.1, 0.4}
    };

    float B[4][4] = {
        {0.1, 0.5, 0.7, 0.2},
        {0.2, 0.5, 0.1, 0.1},
        {0.3, 0.1, 0.9, 0.6},
        {0.4, 0.1, 0.1, 0.1}
    };

    //Declaração do expoente n:
    int n = 3; 

    //Declaração da matriz C de resultado:
    float C[4][4]; 

    multiplica(4, 4, A, B, C, n); //C = (A * B)^n

    //Impressão da matriz C:
    printf("\nMatriz C:\n");
    impressaoMatriz(4, 4, C);

    return 0;
}

void multiplica(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], float matrizC[linhas][colunas], int n) {
    //Primeiro multiplica as matrizes A e B, armazenando o resultado na matriz C: 
    multiplicacaoMatrizes(linhas, colunas, matrizA, matrizB, matrizC);

    float matrizAux[linhas][colunas];

    //Depois eleva a matriz C ao expoente n:
    elevaMatriz(linhas, colunas, matrizC, matrizAux, n);
    copiaMatriz(linhas, colunas, matrizAux, matrizC);
}