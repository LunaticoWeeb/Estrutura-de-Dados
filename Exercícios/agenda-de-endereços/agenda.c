#include <stdio.h>
//#include "contato.h"

#define TRUE 1
#define FALSE 0

void criar_contato();
void buscar_contato();
void remover_contato();

int main()
{
    int execucao = TRUE;
    int opcao;

    //execução do programa:
    while(execucao){ 

        printf("\nOpções:");
        printf("\n1: Criar contato");
        printf("\n2: Buscar contato");
        printf("\n3: Remover contato");
        printf("\n4: Encerrar programa\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao) //controla o que o programa vai fazer
        {
            case 1:
                criar_contato();
                break;
            case 2:
                buscar_contato();
                break;
            case 3:
                remover_contato();
                break;
            case 4:
                execucao = FALSE; //quebra o looping e encerra o programa
                break;
            default:
                break;
        }
    }

    return 0;
}


void criar_contato()
{
    printf("\nContato criado!");
}

void buscar_contato()
{
    printf("\nBuscando contato...");
}

void remover_contato()
{
    printf("\nContato removido!");
}