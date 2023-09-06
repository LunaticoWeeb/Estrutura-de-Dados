#include <stdio.h>

void impressaoMatriz(float matriz[3][3]);
void copiaMatriz(float matrizA[3][3], float matrizB[3][3]);
void multiplicacaoMatrizes(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3]);
void elevaMatriz(float matrizA[3][3], float matrizB[3][3], int n);

int main()
{
    /*declaraçaõ das matrizes A e B:*/
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

    /*declaração da matriz C:*/
    float C[3][3];

    /*declaração dos indíces:*/
    int i, j, k;

    /*multiplicação das matrizes A e B:*/
    multiplicacaoMatrizes(A, B, C);    

    /*impressão das matrizes:*/
    printf("Matriz A:\n");
    impressaoMatriz(A);

    printf("\nMatriz B:\n");
    impressaoMatriz(B);

    printf("\nMatriz C:\n");
    impressaoMatriz(C);

    /*recebe n:*/
    int n;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    /*declaração da matriz Cn:*/
    float Cn[3][3];
    elevaMatriz(C, Cn, n);
    

    /*imprime C^n*/
    printf("\nMatriz C^n:\n");
    impressaoMatriz(Cn);

    return 0;
}

void impressaoMatriz(float matriz[3][3]) {
    int i, j;

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

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3;j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void multiplicacaoMatrizes(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3]) {
    int i, j, k;

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

    for (i = 1; i < n; i++) {
        multiplicacaoMatrizes(matrizA, matriz, matrizB);
        copiaMatriz(matrizB, matriz);
    }
}