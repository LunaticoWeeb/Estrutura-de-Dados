#include <stdlib.h>
#include "src/Lista.h"

// void esvaziar(Lista *l) {
//     int e;
//     while(!isEmptyLista(l)) {
//         puts(getItem(l, &e));
//     }
// }

int main()
{
    int e;
    char *frase;
    Lista *i = createLista();

    if(i == NULL) return 1;

    // set coloca as infos no final
    frase = "Teste 0";
    setItem(i, frase, &e);

    frase = "Teste 1";
    setItem(i, frase, &e);

    frase = "Teste 3";
    setItem(i, frase, &e);

    printLista(i);

    // insert coloca as infos no index 
    frase = "Teste 2";
    insertItem(i, 2, frase, &e);

    printLista(i); 

    // remove o item 1 da lista
    removeItem(i, 1, &e); 
    printLista(i);

    insertItem(i, 2, "Teste A", &e);
    printLista(i);

    // existe o "Teste A" na lista?
    existsItem(i, "Teste A", &e);

    // existe o "Teste B" na lista?
    existsItem(i, "Teste B", &e);

    // esvaziar(i);
    destroyLista(i);
    return 0;
}