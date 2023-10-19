#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int teste(void){
      
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
      printf("\n\n\nTeste RemoveItemFila:\n");
      RemoveItemFila(fila_main, 0);
      RemoveItemFila(fila_main, 7);
      // imprime fila:
      for (int i = 0; i <= n+5; i++) {
            elemento = GetItemFila(fila_main, i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      // Teste PopItemFila
      printf("\n\n\nTeste PopItemFila:\n");
      PopItemFila(fila_main);
      // imprime fila:
      for (int i = 0; i <= n+5; i++) {
            elemento = GetItemFila(fila_main, i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      printf("\n\n\n");
      PopItemFila(fila_main);
      // imprime fila:
      for (int i = 0; i <= n+5; i++) {
            elemento = GetItemFila(fila_main, i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      printf("\n\n\n");
      // Esvazia fila:
      for (int i = 0; i <= n+5; i++) {
            elemento = PopItemFila(fila_main);
            // SetItemFila(fila_main, (float) i);
            if (elemento >= 0) {printf("\n\n %f", elemento);}
      }

      free(fila_main);

      return 0;
};