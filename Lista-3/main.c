#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(void){
      //Teste SetItemFila, n elementos:
      int n = 10;
      Fila *fila_main = CriarFila();
      for (int i = 1; i <= n; i++) {
            SetItemFila(fila_main, (float) i);
            float valor_primeiro, valor_ultimo;
            valor_primeiro = fila_main->first->value;
            printf("\n\n %f", valor_primeiro);

            valor_ultimo = fila_main->last->value;
            printf("\n %f", valor_ultimo);

            int tam;
            tam = fila_main->size;
            printf("\n %d", tam);
      }
      
};