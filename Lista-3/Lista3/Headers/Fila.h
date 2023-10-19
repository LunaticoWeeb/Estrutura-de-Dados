#ifndef FILA_H
#define FILA_H

typedef struct item_ Item;

#define ERRO -32000

#ifndef item_
struct item_ { 
    float value;
    Item *next;
};
#endif

typedef struct { 
    Item *first;
    Item *last;
    int size;
} Fila;

Fila *CriarFila(void);
Item *CriarItem(float value);

void SetItemFila(Fila *fila, float value);
float PopItemFila(Fila *fila);
float GetItemFila(Fila *fila, int index);
Item *SearchIndexFila(Fila *fila, int index);
void RemoveItemFila(Fila *fila, int index);

int IsEmptyFila(Fila *fila);
void DestroyFila(Fila *fila);

#endif //FILA_H