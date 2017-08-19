#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Escolha m ou f para sexo: \n");
    char sexo;
    sexo = getchar();
    switch(sexo){
    case 'M':
    case 'm':
        printf("Masculino \n");
        break;
    case 'F':
    case 'f':
        printf("Feminino \n");
        break;
    default:
        printf("A opcao eh sua \n");
    }
    return 0;
}
