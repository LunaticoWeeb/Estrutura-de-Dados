#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int tam, int *vetor);

int main()
{
      
      int *a, *b, i;

      a = malloc(3 * sizeof(int)); // aloca espaço de 3 inteiros na memória
      b = malloc(3 * sizeof(int));

      for (i = 0; i < 3; i++){
            *(a + i) = 1 + i * 3;
            *(b + i) = 1 + i * 7;
      };

      imprime_vetor(3, a);
      printf("\n");
      imprime_vetor(3, b);

      return 0;
}

void imprime_vetor(int tam, int *vetor)
{
      int j;
      for (j = 0;  j < tam; j++){
            printf("%d  ", *(vetor + j));
      };
};