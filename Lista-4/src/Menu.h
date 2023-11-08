#ifndef MENU_H
#define MENU_H

#include "Lista.h"

char *LerPalavra();
char RecievesOperation(void);
void EvokeOperation(char operation, Lista *list);

#endif