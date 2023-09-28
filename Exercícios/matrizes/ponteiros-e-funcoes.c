#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int tam, int *vetor);
int *cria_vetor(int dim, int mult); //* indica que a função retorna um ponteiro de int

int main()
{
      
      int *a, *b;

      a = cria_vetor(3, 3);
      b = cria_vetor(3, 7);

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

int *cria_vetor(int dim, int mult)
{
      int *vetor, i;
      vetor = malloc(dim * sizeof(int));

      for (i = 0; i < dim; i++){
            *(vetor + i) = 1 + i * mult;
      };

      return vetor; // retorna o endereço do primeiro elemento do vetor
};