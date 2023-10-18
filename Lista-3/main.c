#include <stdio.h>
#include "Fila.h"

int main(void){
      // Teste CriarFila:
      Fila *fila_main = CriarFila();
      fila_main->size = 3;
      printf("Tam: %d", fila_main->size);


      //Teste SetItemFila, um elemento:
      SetItemFila(fila_main, 2.0);
      // - testa os valores do primeiro e ultimo (devem ser 2.0)
      float valor_primeiro, valor_ultimo;
      valor_primeiro = fila_main->first->value;
      printf("\n %f", valor_primeiro);
      valor_ultimo = fila_main->last->value;
      printf("\n %f", valor_ultimo);
      // - testa o tamanho da fila (deve ser 1)
      float tam;
      tam = fila_main->size;
      printf("\n %d", tam);
};