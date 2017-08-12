#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;
    printf("Insira um caracter: \n");
    a = getchar();
    printf("Insira outro caracter: \n");
    fflush(stdin);
    b = getchar();
    printf("Primeiro caracter: %c\n", a);
    printf("Segundo caracter: %c\n", b);
    return 0;
}
