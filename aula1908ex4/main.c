#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float salario, imposto;
    printf("Digite o salario: \n");
    scanf("%f", &salario);
    fflush(stdin);
    printf("Digite [m] para masculino e [f] para feminino: \n");
    sexo = getchar();
    switch(sexo){
    case 'f':
    case 'F':
        imposto = salario * 0.10;
        break;
    case 'm':
    case 'M':
        imposto = salario * 0.15;
        break;
    default:
        printf("Opcao invalida \n");
        imposto = 0;
    }
    printf("Valor do Salario: %6.2f    \n", salario);
    printf("Valor do imposto:   %6.2f \n", imposto);
    return 0;
}
