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


void SetItemFila(Fila *fila, float value){
      /*
      cria novo item (aloca espaço)
      se lista está vazia:
            coloca item como primeiro
            coloca item como ultimo
      se ñ:
            coloca endereço do novo item no next do item anterior
      coloca value no value do novo_item
      next do novo_item é NULL
      aumenta size em um
      */
      Item *novo_item = (Item*) malloc(sizeof(Item));

      novo_item->value = value;
      novo_item->next = NULL; //último da fila

      if (fila->size == 0) {
            // É o único item na fila
            fila->first = novo_item;
            fila->last = novo_item; //!!!!!!!!!!!ou usa &?
      } else {
            fila->last->next = novo_item; // encadeia novo item com o anterior
      };

      (fila->size)++; // aumenta o tamanho da lista em 1
};