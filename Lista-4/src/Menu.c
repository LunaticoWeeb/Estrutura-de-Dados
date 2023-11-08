#include "Menu.h"

#include <stdio.h>

int RecievesOperation(void){

      printf("\nDigite o número da operação desejada:" 
      "\n1 - Inserir um novo Item"
      "\n2 - Remover um Item"
      "\n3 - Consultar existência de um Item"
      "\n4 - Imprimir todos os Itens\n"
      );

      int operation;
      scanf("%d", &operation);
      return operation;
}

void EvokeOperation(int operation, Lista *list){

      int e;
      char name[50];
      int position;

      switch (operation)
      {
      case 1:
            printf("\nDigite o nome do Item: ");
            scanf("%s", name);

            printf("\nA posição do Item: ");
            scanf("%d", &position);

            insertItem(list, position, name, &e);
            break;
      case 2:
            printf("\nDigite a posição do Item: ");
            scanf("%s", position);

            removeItem(list, position, &e);
            break;
      case 3:
            printf("\nDigite o nome do Item: ");
            scanf("%s", name);

            existsItem(list, name, &e);
            break;
      case 4:
            printLista(list);
            break;
      default:
            printf("\nOperação inválida!");
            break;
      }
}