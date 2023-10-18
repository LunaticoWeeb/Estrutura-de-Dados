#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila *CriarFila(void){
      Fila *nova_fila = (Fila*) malloc(sizeof(Fila)); 

      nova_fila->first = NULL;
      nova_fila->last = NULL;
      nova_fila->size = 0;

      return nova_fila;
};