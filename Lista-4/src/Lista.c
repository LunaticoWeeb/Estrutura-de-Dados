#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lista.h"

#define maxStringSize 40

Lista* createLista()
{
    Lista *new = (Lista*) malloc(sizeof(Lista));

    if(new == NULL) {
        return NULL;
    }
    else {
        new->first = NULL;
        new->last = NULL;

        new->size = 0;
        return new;
    }
}

Item* createItem(char *value)
{
    Item *new =(Item*) malloc(sizeof(Item));

    if(new == NULL) {
        return NULL;
    }
    else {
        new->value = (char*) malloc(sizeof(value));
        new->value = value;
        new->prox = NULL;
        new->ant = NULL;
        return new;
    }
}

void setItem(Lista *lista, char *value, int *erro)
{
    int e;
    Item *i = createItem(value);

    if(i == NULL) {
        *erro = 1;
        printf("Não foi possível alocar memória para adicionar item na lista!");
        return;
    }
    else {
        *erro = 0;
        if(isEmptyLista(lista)) {
            lista->size ++;
            lista->first = i;
            lista->last = i;
        }
        else {
            lista->size ++;
            i->ant = lista->last;
            lista->last->prox = i;
            
            lista->last = i;
        }
    }
}

void insertItem(Lista *lista, int index, char *value, int *erro)
{
    int e, i;
    Item *item = createItem(value), *cur, *prox;

    if(item == NULL) {
        *erro = 1;
        printf("Não foi possível alocar memória para adicionar item na lista!");
        return;
    }
    else {
        *erro = 0;
        if(isEmptyLista(lista)) { // Lista vazia
            lista->first = item;
            lista->last = item;
        }
        else if(index > lista->size) { // caso index > size
            item->ant = lista->last;
            lista->last = item;
        }
        else if(index) { // caso 0 < index <= size
            i = 1;
            cur = lista->first;
            while(i++ < index) cur = cur->prox;
            prox = cur->prox;

            cur->prox = item;
            prox->ant = item;
            
            item->prox = prox;
            item->ant = cur;
        }
        else { // Caso o index seja 0
            cur = lista->first;
            
            item->prox = cur;
            cur->ant = item;

            lista->first = item;
        }

        lista->size ++;
    }
}

char* getItem(Lista *lista, int *erro)
{
    if(isEmptyLista(lista)) {
        *erro = 1;
    }
    else {
        Item *cur, *nfirst;
        char *info;
        *erro = 0;

        cur = lista->first;
        info = (char*) malloc(sizeof(cur->value));
        strcpy(info, cur->value);

        if(cur->prox != NULL) {
            nfirst = cur->prox;
            nfirst->ant = NULL;
            lista->first = nfirst;
        }
        else {
            lista->first = NULL;
            lista->last = NULL;
        }
        
        lista->size --;
        free(cur);
        return info;
    }
}

int isEmptyLista(Lista *lista)
{
    return (lista->size == 0)? 1 : 0;
}

void destroyLista(Lista *lista) {
    int e;
    while(!isEmptyLista(lista)) {
        getItem(lista, &e);
    }

    free(lista);
}