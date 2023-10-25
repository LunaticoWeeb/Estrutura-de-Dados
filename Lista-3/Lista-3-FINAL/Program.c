/* Program.c */

#include "User.h"

int main() {
    int exec = 1;
    Fila *fila = CriarFila();

    while (exec)
    {
        ReadOperation(fila, &exec);
    }
    
    DestroyFila(fila);
    return 1;
}