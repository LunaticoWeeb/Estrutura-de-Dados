#include <stdio.h>
#include <stdlib.h>  // necessário para usar a função malloc

void imprime_vetor(int tam, int *vetor); //*vetor indica que vai receber um ponteiro de int

int main()
{
      
      int *a, *b, endereco1[3], endereco2[3], i; //* indica que a e b são ponteiros

      a = &endereco1[0]; //& indica que está recebendo o endereço
      b = &endereco2[0];

      for (i = 0; i < 3; i++){
            *(a + i) = 1 + i * 3;
            *(b + i) = 1 + i * 7;
            /*
            equivalente a:
                  a[i] = 1 + i * 3;
                  b[i] = 1 + i * 7;
            */
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