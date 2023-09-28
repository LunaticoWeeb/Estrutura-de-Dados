#include <stdio.h>
#include "matrizes.h"

void impressaoMatriz(int linhas, int colunas, float matriz[linhas][colunas]) {
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

void copiaMatriz(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas]) {
    int i, j;

    //Copia cada elemento da matriz A para a matriz B:
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas;j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void somaMatrizes(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], float matrizC[linhas][colunas]) {
    int i, j;

    //Soma os elementos de cada linha de A com os elementos de cada linha de B:
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void subtraiMatrizes(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], float matrizC[linhas][colunas]) {
    int i, j;

    //Subtrai os elementos de cada linha de A com os elementos de cada linha de B:
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

void multiplicacaoMatrizes(int linhasA, int colunasA, float matrizA[linhasA][colunasA], int linhasB, int colunasB, float matrizB[linhasB][colunasB], float matrizC[linhasA][colunasB]) {
    int i, j, k;

    //Soma o produto dos elementos de cada linha de A com cada coluna de B:
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasB; j++){
            matrizC[i][j] = 0;
            for (k = 0; k < linhasB; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void elevaMatriz(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], int n) {
    int i, j, k;
    float matriz[linhas][colunas];
    copiaMatriz(linhas, colunas, matrizA, matriz);
    copiaMatriz(linhas, colunas, matrizA, matrizB);

    //Multiplica a matriz A por si mesma n vezes:
    for (i = 1; i < n; i++) {
        multiplicacaoMatrizes(linhas, colunas, matrizA, linhas, colunas, matriz, matrizB);
        copiaMatriz(linhas, colunas, matrizB, matriz);
    }
}

void multiplica_e_eleva(int linhasA, int colunasA, float matrizA[linhasA][colunasA], int linhasB, int colunasB, float matrizB[linhasB][colunasB], float matrizC[linhasA][colunasB], int n) {
    //Primeiro multiplica as matrizes A e B, armazenando o resultado na matriz C: 
    multiplicacaoMatrizes(linhasA, colunasA, matrizA, linhasB, colunasB, matrizB, matrizC);

    float matrizAux[linhasA][colunasB];

    //Depois eleva a matriz C ao expoente n:
    elevaMatriz(linhasA, colunasB, matrizC, matrizAux, n);
    copiaMatriz(linhasA, colunasB, matrizAux, matrizC);
}