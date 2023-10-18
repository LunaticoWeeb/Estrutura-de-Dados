#ifndef FILA_H
#define FILA_H

typedef struct item_ Item;

#define ERRO -32000

struct item_ { 
    float value;
    Item *next;
};

typedef struct { 
    Item *first;
    Item *last;
    int size;
} Fila;

Fila *CriarFila(void);
Item *CriarItem(float value);
void SetItemFila(Fila *fila, float value);
float PopItemFila(Fila *fila);
Item *CriarItem(float value);
Item *SearchIndexFila(Fila *fila, int index);
float GetItemFila(Fila *fila, int index);
void RemoveItemFila(Fila *fila, int index);

#endif //FILA_H