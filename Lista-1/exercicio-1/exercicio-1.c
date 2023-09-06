#include <stdio.h>

char concatena(char cadeia1[], char cadeia2[], char concatenador, char cadeiaConcatenada[]);

int main()
{
	//Recebe duas cadeias de caracteres e um concatenador
	char cadeia1[] = "Nome1";
	char cadeia2[] = "Nome2";
	char concatenador = '-';

	//Cria uma cadeia de caracteres para armazenar a cadeia concatenada
	char cadeiaConcatenada[100];

	//Imprime cadeia concatenada:
	concatena(cadeia1, cadeia2, concatenador, cadeiaConcatenada);
	printf("%s", cadeiaConcatenada);

	return 0;
}

char concatena(char cadeia1[], char cadeia2[], char concatenador, char cadeiaConcatenada[])
{
	//Variáveis
	int i = 0, j = 0;

	//Adiciona a primeira cadeia de caracteres na cadeia concatenada:
	while (cadeia1[i] != '\0')
	{
		cadeiaConcatenada[i] = cadeia1[i];
		i++;
	}

	//Adiciona o concatenador na cadeia concatenada:
	cadeiaConcatenada[i] = concatenador;
	i++;

	//Adiciona a segunda cadeia de caracteres na cadeia concatenada:
	while (cadeia2[j] != '\0')
	{
		cadeiaConcatenada[i] = cadeia2[j];
		i++;
		j++;
	}

	//Adiciona o caractere nulo no final da cadeia concatenada:
	cadeiaConcatenada[i] = '\0';

	return cadeiaConcatenada;
}