#include <stdio.h>
#include <stdlib.h>

int main()
{
    int razao, pa=1, i;
    printf("Exercicio 1 slide 19 aula 4\n");
    printf("Digite a razao:  \n");
    scanf("%d", &razao);
    for(i=1; i<=10; i++){
        printf("%d termo ==> %d \n", i, pa);
        pa += razao;
    }
    return 0;
}
