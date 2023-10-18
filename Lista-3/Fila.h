#ifndef FILA_H
#define FILA_H

typedef struct item_ Item;

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
void SetItemFila(Fila *fila, float value);
//void PopItemFila(Fila *fila, int *target);
//void GetItemFila(Fila *fila, int index, int *target);
//void RemoveItemFila(Fila *fila);

//float LengthFila(Fila *fila);
//float IsEmptyFila(Fila *fila);
//void ReversedFila(Fila *fila, Fila *target);
//void DestroyFila(Fila *fila);

#endif //FILA_H