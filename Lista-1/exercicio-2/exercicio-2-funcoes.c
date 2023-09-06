#include <stdio.h>
#include "exercicio-2-funcoes.h"

void impressaoMatriz(float matriz[3][3]) {
    int i, j;

    //Imprime cada linha da matriz:
    for (i = 0; i < 3; i++) {
        printf("[");
        for (j = 0; j < 3; j++) {
            printf("%.6f", matriz[i][j]);
            if (j < 2) {
                printf(", ");
            }
        }
        printf("]\n");
    }
}

void copiaMatriz(float matrizA[3][3], float matrizB[3][3]) {
    int i, j;

    //Copia cada elemento da matriz A para a matriz B:
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3;j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void multiplicacaoMatrizes(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3]) {
    int i, j, k;

    //Soma o produto dos elementos de cada linha de A com cada coluna de B:
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            matrizC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void elevaMatriz(float matrizA[3][3], float matrizB[3][3], int n) {
    int i, j, k;
    float matriz[3][3];
    copiaMatriz(matrizA, matriz);
    copiaMatriz(matrizA, matrizB);

    //Multiplica a matriz A por si mesma n vezes:
    for (i = 1; i < n; i++) {
        multiplicacaoMatrizes(matrizA, matriz, matrizB);
        copiaMatriz(matrizB, matriz);
    }
}