#include <stdio.h>
#include <stdlib.h> 

void imprime_vetor(int linhas, int colunas, int *vetor);

#define dimX 3 
#define dimY 3

int main()
{
      
      int *a, *b, endereco1[dimX][dimY], endereco2[dimX][dimY], i, len; 

      len = dimX * dimY;

      a = &endereco1[0][0];
      b = &endereco2[0][0];

      for (i = 0; i < len; i++){
            *(a + i) = 1 + i * 3;
            *(b + i) = 1 + i * 7;
      };

      printf("OK\n");

      imprime_vetor(dimX, dimY, a);
      printf("\n\n");
      imprime_vetor(dimX, dimY, b);

      return 0;
}

void imprime_vetor(int tam, int *vetor) // TODO: Montar matriz
{
      int *j;

      for (j = vetor;  j < &(*(vetor + tam)); j++){
            printf("%d  ", *j);
      };
};