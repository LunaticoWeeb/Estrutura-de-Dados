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
        strcpy(new->value, value);
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

void printLista(Lista *lista)
{
    int i;
    Item *cur;
    printf("\nLista:\n");

    printf("Tamanho: %d\n", lista->size);

    if(isEmptyLista(lista)) {
        printf("- Lista vazia!");
    }
    else {
        i = 1;
        cur = lista->first;
        while(cur != NULL) {
            printf("%d - %s\n", i++, cur->value);
            cur = cur->prox;
        }
    }
}

void removeItem(Lista *lista, int index, int *erro)
{
    int i;
    Item *cur, *ant, *prox;

    if(isEmptyLista(lista)) {
        *erro = 1;
        printf("\nA lista está vazia!\n");
        return;
    } 
    else if (index < 0) {
        *erro = 1;
        printf("\nO index não pode ser negativo!\n");
        return;
    } 
    else {
        *erro = 0;
        
        if (lista->size == 1) { // Caso a lista tenha apenas 1 item
            cur = lista->first;
            lista->first = NULL;
            lista->last = NULL;
        }
        else if(index > lista->size) { // caso index > size
            cur = lista->last;
            ant = cur->ant;
            ant->prox = NULL;
            lista->last = ant;
        }
        else if(index > 1) { // caso 1 < index <= size
            i = 1;
            cur = lista->first;
            while(i++ < index) cur = cur->prox;
            ant = cur->ant;
            prox = cur->prox;
            
            ant->prox = prox;
            prox->ant = ant;
        }
        else { // Caso o index seja 0
            cur = lista->first;
            prox = cur->prox;

            lista->first = prox;
            prox->ant = NULL;
        }

        lista->size --;
        free(cur);
    }
}

void existsItem(Lista *lista, char *value, int *erro)
{
    int i;
    Item *cur;

    if(isEmptyLista(lista)) {
        *erro = 1;
        printf("\nA lista está vazia!\n");
        return;
    } 
    else {
        *erro = 0;
        i = 1;
        cur = lista->first;
        while(cur != NULL) {
            if(strcmp(cur->value, value) == 0) {
                printf("\nO item %s existe na lista!\n", value);
                return;
            }
            cur = cur->prox;
        }
        printf("\nO item %s não existe na lista!\n", value);
    }
}

int sizeLista(Lista *lista)
{
    return lista->size;
}

void destroyLista(Lista *lista) {
    int e;
    while(!isEmptyLista(lista)) {
        getItem(lista, &e);
    }

    free(lista);
}