#include "src/Menu.h"

int main(void){

      Lista *list = createLista();
      int exec = 1;

      while (exec)
      {
            int operation = RecievesOperation();
            EvokeOperation(operation, list);

            printf("\nDeseja continuar? (1 - Sim | 0 - Não): ");
            scanf("%d", &exec);
      }

      return 0;
}