#ifndef EXERCICIO_2_FUNCOES_H
#define EXERCICIO_2_FUNCOES_H

void impressaoMatriz(int linhas, int colunas, float matriz[linhas][colunas]);
void copiaMatriz(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas]);

void somaMatrizes(int linhas, int colunas, float matrizA[linhas][colunas], 
                  float matrizB[linhas][colunas], float matrizC[linhas][colunas]);
                  
void subtraiMatrizes(int linhas, int colunas, float matrizA[linhas][colunas], 
                     float matrizB[linhas][colunas], float matrizC[linhas][colunas]);

void multiplicacaoMatrizes(int linhasA, int colunasA, float matrizA[linhasA][colunasA], 
                              int linhasB, int colunasB, float matrizB[3][3], float matrizC[linhasA][colunasB]);

void elevaMatriz(int linhas, int colunas, float matrizA[linhas][colunas], float matrizB[linhas][colunas], int n);

void multiplica_e_eleva(int linhasA, int colunasA, float matrizA[linhasA][colunasA], 
                        int linhasB, int colunasB, float matrizB[linhasB][colunasB], 
                        float matrizC[linhasA][colunasB], int n);


#endif //EXERCICIO_2_FUNCOES_H