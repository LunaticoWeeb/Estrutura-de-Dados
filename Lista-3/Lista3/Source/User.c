#include <stdio.h>

#include "User.h"

void PrintFila(Fila *fila)
{
    Fila *aux = CriarFila();
    float value;
    int i = 0;
    if(IsEmptyFila(fila)) {
        printf("Fila esta vazia");
        return;
    }

    while(!IsEmptyFila(fila))
    {
        value = PopItemFila(fila);
        printf("Index: %d -- Valor: %.2f\n", i++, value);

        SetItemFila(aux, value);
    }

    while(!IsEmptyFila(aux))
    {
        SetItemFila(
            fila,
            PopItemFila(aux)
        );
    }
}

void SetOperation(Fila *fila)
{
    float value;

    printf("Ensira o valor (float): ");
    scanf("%f", &value);

    SetItemFila(fila, value);
}

void PopOperation(Fila *fila)
{
    if(IsEmptyFila(fila)) {
        printf("Nao e possivel fazer essa operacao, fila esta vazia");
    }
    else {
        printf("Valor retirado: %.02f", PopItemFila(fila));
    }
}

void GetOperation(Fila *fila)
{
    int i;
    if(IsEmptyFila(fila)) {
        printf("Nao e possivel fazer essa operacao, fila esta vazia");
    }
    else {
        printf("Ensira o index (0 - %d)", fila->size-1);
        scanf("%d", &i);

        if(i < 0 || fila->size <= i ) {
            printf("Index fora do escopo");
        }
        else {
            printf("Index: %d -- Valor: %.2f", i++, GetItemFila(fila, i));
        }
    }
}

void ReadOperation(Fila *fila, int *exec) {
    int op, execute;

    printf("\n\nSelecione a operacao que deseja fazer:\n"
    "1 - Adicionar item da fila\n"
    "2 - Pegar item da fila\n"
    "3 - Pegar item pelo index\n"
    "4 - Tamanho da Fila\n"
    "5 - Imprimir a Fila atual\n"
    "6 - Fechar programa\n"
    );
    scanf("%d", &op);
    printf("\n");

    *exec = 1;
    switch(op) {
        case 1:
            SetOperation(fila);
            break;
        
        case 2:
            PopOperation(fila);
            break;
        
        case 3:
            GetOperation(fila);
            break;

        case 4:
            printf("Tamanho da fila: %d", fila->size);
            break;

        case 5:
            PrintFila(fila);
            break;
        
        case 6:
            printf("Finalizando programa.");
            *exec = 0;
            break;

        default:
            printf("Por favor, escolha uma operacao valida");
            ReadOperation(fila, exec);
            break;
    }
}
