#include <stdio.h>

char concatena(char cadeia1[], char cadeia2[], char concatenador, char cadeiaConcatenada[]);

int main()
{
	//Recebe duas cadeias de caracteres e um concatenador
	char cadeia1[50];
	char cadeia2[50];
	char concatenador;

	//Recebe cadeia1:
	printf("Digite a primeira cadeia de caracteres: ");
	scanf("%[^\n]s", cadeia1);

	//Recebe cadeia2:
	printf("Digite a segunda cadeia de caracteres: ");
	scanf(" %[^\n]s", cadeia2);

	//Recebe concatenador:
	printf("Digite o concatenador: ");
	scanf(" %c", &concatenador);

	//Cria uma cadeia de caracteres para armazenar a cadeia concatenada
	char cadeiaConcatenada[101];

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