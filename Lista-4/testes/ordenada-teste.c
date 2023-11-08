#include "src/Lista.h"

int main()
{
    int e;
    char *frase;
    Lista *i = createLista();

    if(i == NULL) return 1;

    frase = "Zeus";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    frase = "Hades";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    frase = "Poseidon";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    frase = "Ares";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    frase = "Hefesto";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    frase = "Atena";
    insertItemOrdenado(i, frase, &e);
    printLista(i);

    // esvaziar(i);
    destroyLista(i);
    return 0;
}