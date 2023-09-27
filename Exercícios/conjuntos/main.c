#include <stdio.h>

void uniao(char *a, char *b, char *c);
void interseccao(char *a, char *b, char *c);
void diferenca(char *a, char *b, char *c);

int main()
{
    char conjA[] = {'a', 'b', 'c', 'd'};
    char conjB[] = {'b', 'c', 'e', 'f'};
    char conjC[10];

    uniao(*conjA, *conjB, *conjC);
    
    int i;
    for(i = 0; i <= 10; i++){
        printf("\n%c  ", conjC[i]);
    }
}

void uniao(char *a, char *b, char* c)
{
    int s = sizeof(s)/sizeof(char);
    printf("\n %d", s);
}