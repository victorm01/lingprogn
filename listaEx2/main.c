#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma=0;
    do{
        do{
            printf("Digite um numero: \n");
            scanf("%d", &n);
        }while((n<0)||(n>=20));
        soma += n;
    }while(n!=0);
    printf("Soma: %d \n", soma);
    return 0;
}
