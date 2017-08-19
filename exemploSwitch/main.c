#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    printf("Escolha pelo numero: 1, 2 ou 3 \n");
    scanf("%d", &opc);
    switch(opc){
    case 1:
        printf("Voce escolheu 1 (cafe) \n");
        break;
    case 2:
        printf("Voce escolheu 2 (leite) \n");
        break;
    case 3:
        printf("Voce escolheu 3 (agua) \n");
        break;
    default:
        printf("Escolha invalida \n");
    }
    printf("acabou\n");
    return 0;
}
