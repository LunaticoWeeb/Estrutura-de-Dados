#include <stdio.h>
#include "Fila.h"

int main(void){
      // Teste CriarFila:
      Fila *fila_main = CriarFila();
      fila_main->size = 3;
      printf("Tam: %d", fila_main->size);

      
};