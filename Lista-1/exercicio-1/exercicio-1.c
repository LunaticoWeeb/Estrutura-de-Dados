#include <stdio.h>

int main()
{
	//Recebe duas cadeias de caracteres e um concatenador
	char cadeia1[] = "Nome1";
	char cadeia2[] = "Nome2";
	char concatenador = '-';

	//Imprime as cadeias concatenadas
	printf("%s%c%s", cadeia1, concatenador, cadeia2);

	return 0;
}