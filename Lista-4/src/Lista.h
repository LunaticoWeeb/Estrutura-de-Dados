#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxStringSize 40

typedef struct item_ Item;
#ifndef item_
struct item_ {
    Item *ant;
    Item *prox;
    char *value;
};
#endif

typedef struct {
    Item *first;
    Item *last;
    int size;
} Lista;


Lista* createLista();
Item* createItem();

void printLista(Lista *lista);

void setItem(Lista *lista, char *value, int *erro);
void insertItem(Lista *lista, int index, char *value, int *erro);
char* getItem(Lista *lista, int *erro);
void removeItem(Lista *lista, int index, int *erro);
void existsItem(Lista *lista, char *value, int *erro);

int isEmptyLista(Lista *lista);
void destroyLista(Lista *lista);