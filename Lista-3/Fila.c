#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila *CriarFila(void){
      Fila *nova_fila = (Fila*) malloc(sizeof(Fila)); 

      //Lista vazia:
      nova_fila->first = NULL;
      nova_fila->last = NULL;
      nova_fila->size = 0;

      return nova_fila;
};

Item *CriarItem(float value){
      Item *novo_item = (Item*) malloc(sizeof(Item));

      //Item vazio:
      novo_item->value = value;
      novo_item->next = NULL;
}

void SetItemFila(Fila *fila, float value){
      Item *novo_item = CriarItem(value);

      if (fila->size == 0) {
            // É o único item na fila
            fila->first = novo_item;
            fila->last = novo_item;
      } else {
            fila->last->next = novo_item; // encadeia novo item com o anterior
            fila->last = novo_item; // novo item é o último
      };

      (fila->size)++; // aumenta o tamanho da lista em 1
};