#ifndef MENU_H
#define MENU_H

#include "Lista.h"

char *LerPalavra(void);
char DefineTypeLista(void);
char RecievesOperation(char typeLista);
void EvokeOperation(char operation, Lista *list);

#endif