#include <stdio.h>

//Declaração das funções:
void impressaoMatriz(float matriz[3][3]);
void copiaMatriz(float matrizA[3][3], float matrizB[3][3]);
void multiplicacaoMatrizes(float matrizA[3][3], float matrizB[3][3], float matrizC[3][3]);
void elevaMatriz(float matrizA[3][3], float matrizB[3][3], int n);

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

    //Declaração da matriz C de resultado:
    float C[3][3];

    //Declaração dos indices:
    int i, j, k;

    //Multiplicação das matrizes A e B, resultado em C:
    multiplicacaoMatrizes(A, B, C);    

    //Impressão das matrizes:
    printf("Matriz A:\n");
    impressaoMatriz(A);

    printf("\nMatriz B:\n");
    impressaoMatriz(B);

    printf("\nMatriz C:\n");
    impressaoMatriz(C);

    //Recebe expoenente n:
    int n;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    //Declaração da matriz C^n:
    float Cn[3][3];
    elevaMatriz(C, Cn, n);
    

    //Impressão da matriz C^n:
    printf("\nMatriz C^n:\n");
    impressaoMatriz(Cn);

    return 0;
}

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