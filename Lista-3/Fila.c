#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila *CriarFila(void)
{
      Fila *nova_fila = (Fila*) malloc(sizeof(Fila)); 

      //Lista vazia:
      nova_fila->first = NULL;
      nova_fila->last = NULL;
      nova_fila->size = 0;

      return nova_fila;
}

Item *CriarItem(float value)
{
      Item *novo_item = (Item*) malloc(sizeof(Item));

      //Item vazio:
      novo_item->value = value;
      novo_item->next = NULL;

      return novo_item;
}

void SetItemFila(Fila *fila, float value)
{
      Item *novo_item = CriarItem(value);

      if (fila->size == 0) {
            // É o único item na fila
            fila->first = novo_item;
            fila->last = novo_item;
      } else {
            fila->last->next = novo_item; // encadeia novo item com o anterior
            fila->last = novo_item; // novo item é o último
      }

      (fila->size)++; // aumenta o tamanho da lista em 1
}

float PopItemFila(Fila *fila)
{
      // verifica se a fila está vazia:
      if (fila->size > 0){
            Item *primeiro = fila->first; // primeiro da fila
            float elemento = primeiro->value; // valor do primeiro da fila
            Item *proximo = primeiro->next; // acha o próximo da fila
            fila->first = proximo; // próximo vai pro início da fila
            (fila->size)--; // diminui tamanho da fila
      
            //liberar memória:
            free(primeiro);

            return elemento;
      } else {
            printf("\n\n A fila está vazia!");
            return ERRO; // retorna -32000 se a fila estiver vazia
      }
}

Item *SearchIndexFila(Fila *fila, int index)
{
      Item *item = fila->first; // primeiro da fila

      if (index < fila->size){
            // percorre lista até posição do index:
            for (int i = 1; i <= index; i++){ 
                  item = item->next;
            }
            return item;
      } else {
            return NULL;
      }
}

float GetItemFila(Fila *fila, int index)
{
      Item *item = SearchIndexFila(fila, index);
      if (item == NULL) {
            return ERRO;
      }
      return item->value;
}

void RemoveItemFila(Fila *fila, int index)
{
      Item *itemAnterior = SearchIndexFila(fila, index-1);
      Item *itemAlvo = SearchIndexFila(fila, index);
      Item *itemSeguinte = SearchIndexFila(fila, index+1);

      // checando se existe o item na fila
      if (itemAlvo != NULL){
            // se existe um item seguinte, liga ele ao anterior ao alvo
            if (itemSeguinte != NULL){
                  itemAnterior->next = itemSeguinte;
            } else {
                  itemAnterior->next = NULL; // se não, é o fim da fila
            }

            // se mudar o primeiro ou último da fila:
            if (index == 0){ // mudou o primeiro item da fila
                  fila->first = itemSeguinte;
            } else if (index == (fila->size) - 1){ // mudou o último item da fila
                  fila->last = itemAnterior;
            }
            
            (fila->size)--; // mudou o tamanho da fila 

            // apaga o alvo da memória:
            free(itemAlvo);
      }
}