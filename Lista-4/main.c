#include "src/Menu.h"

int main(void){

      Lista *list = createLista();
      if(list == NULL) return 1;
      int exec = 1;
      int e;

      // Inserindo alguns itens para testes:
      // setItem(list, "Zeus", &e);
      // setItem(list, "Poseidon", &e);
      // setItem(list, "Hades", &e);
      // setItem(list, "Ares", &e);
      // setItem(list, "Hefesto", &e);
      // printLista(list);

      while (exec)
      {
            int operation = RecievesOperation();
            EvokeOperation(operation, list);

            printf("\nDeseja continuar? (1 - Sim | 0 - Não): ");
            scanf("%d", &exec);
      }

      return 0;
}