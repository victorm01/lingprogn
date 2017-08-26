#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    do{
        system("cls");
        printf("Escolha pelo numero: \n");
        printf("1.. cafe \n");
        printf("2.. leite \n");
        printf("3.. Sair \n");
        printf("Opcao:  ");
        scanf("%d", &opc);
    }while((opc<1) || (opc>3));
    switch(opc){
    case 1:
        printf("Escolheu cafe \n");
        break;
    case 2:
        printf("Escolheu leite\n");
        break;
    case 3:
        printf("Fim \n");
        break;
    }


    return 0;
}
