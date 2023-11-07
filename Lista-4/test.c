#include <stdlib.h>
#include "src/Lista.h"

void esvaziar(Lista *l) {
    int e;
    while(!isEmptyLista(l)) {
        puts(getItem(l, &e));
    }
}

int main()
{
    int e;
    char *frase;
    Lista *i = createLista();

    if(i == NULL) return 0;
    
    // set coloca as infos no final
    frase = "Teste 0";
    setItem(i, frase, &e);

    frase = "Teste 1";
    setItem(i, frase, &e);

    frase = "Teste 3";
    setItem(i, frase, &e);

    // insert coloca as infos no index 
    frase = "Teste 2";
    insertItem(i, 2, frase, &e);

    esvaziar(i);
    destroyLista(i);
    return 1;
}