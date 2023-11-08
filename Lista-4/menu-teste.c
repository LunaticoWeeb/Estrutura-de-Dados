#include "src/Menu.h"

int main(void){

      Lista *list = createLista();
      if(list == NULL) return 1;
      int exec = 1;
      int e;

      while (exec)
      {
            char operation = RecievesOperation();
            EvokeOperation(operation, list);

            printf("\nDeseja continuar? (1 - Sim | 0 - Não): ");
            scanf("%d", &exec);
      }

      return 0;
}