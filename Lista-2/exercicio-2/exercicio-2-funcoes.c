#include <stdio.h>
#include "exercicio-2-funcoes.h"

void impressaoMatriz(int linhas, int colunas, float matriz[3][3]) {
    int i, j;

    //Imprime cada linha da matriz:
    for (i = 0; i < linhas; i++) {
        printf("[");
        for (j = 0; j < colunas; j++) {
            printf("%.6f", matriz[i][j]);
            if (j < colunas - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }
}

void copiaMatriz(int linhas, int colunas, float matrizA[3][3], float matrizB[3][3]) {
    int i, j;

    //Copia cada elemento da matriz A para a matriz B:
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas;j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void multiplicacaoMatrizes(int linhas, int colunas, float matrizA[3][3], float matrizB[3][3], float matrizC[3][3]) {
    int i, j, k;

    //Soma o produto dos elementos de cada linha de A com cada coluna de B:
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++){
            matrizC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void elevaMatriz(int linhas, int colunas, float matrizA[3][3], float matrizB[3][3], int n) {
    int i, j, k;
    float matriz[linhas][colunas];
    copiaMatriz(linhas, colunas, matrizA, matriz);
    copiaMatriz(linhas, colunas, matrizA, matrizB);

    //Multiplica a matriz A por si mesma n vezes:
    for (i = 1; i < n; i++) {
        multiplicacaoMatrizes(linhas, colunas, matrizA, matriz, matrizB);
        copiaMatriz(linhas, colunas, matrizB, matriz);
    }
}