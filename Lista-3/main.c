#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(void){
      // Adiciona n elementos na fila:
      int n = 10;
      Fila *fila_main = CriarFila();
      for (int i = 0; i < n; i++) {
            SetItemFila(fila_main, (float) i);
      }

      // Teste GetItemFila:
      float elemento;
      for (int i = 0; i <= n+5; i++) {
            elemento = GetItemFila(fila_main, i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      // Teste RemoveItemFila
      RemoveItemFila(fila_main, 0);
      RemoveItemFila(fila_main, 7);
      printf("\n\n\n");

      // TODO: novo teste do pop 
      // Teste PopItemFila:
      for (int i = 0; i <= n+5; i++) {
            elemento = PopItemFila(fila_main);
            // SetItemFila(fila_main, (float) i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      free(fila_main);

      return 0;
};