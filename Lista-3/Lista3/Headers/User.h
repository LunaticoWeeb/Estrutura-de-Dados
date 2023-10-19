#ifndef USER_H
#define USER_H

#include "Fila.h"

void PrintFila(Fila *fila);

void ReadOperation(Fila *fila, int *exec);
void SetOperation(Fila *fila);
void PopOperation(Fila *fila);
void GetOperation(Fila *fila);

#endif