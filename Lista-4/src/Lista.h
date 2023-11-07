#include <stdio.h>
#include <stdlib.h>

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

void setItem(Lista *lista, char *value, int *erro);
void insertItem(Lista *lista, int index, char *value, int *erro);
char* getItem(Lista *lista, int *erro);

int isEmptyLista(Lista *lista);
void destroyLista(Lista *lista);