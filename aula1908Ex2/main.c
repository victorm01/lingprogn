#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto,  imposto;
    char estadoCivil;
    printf("Digite o salario Bruto:    \n");
    scanf("%f", &salarioBruto);
    fflush(stdin); //limpar buffer do teclado
    printf("Digite c para casado ou s para solteiro:  \n");
    estadoCivil = getchar();
    switch(estadoCivil){
    case 'c':
    case 'C':
        imposto = salarioBruto * 0.09;
        break;
    case 's':
    case 'S':
        imposto = salarioBruto * 0.10;
        break;
    default:
        printf("Estado civil invalido \n");
        imposto = 0.0;
    }
    printf("Salario Bruto:   %6.2f   \n", salarioBruto);
    printf("Imposto:  %6.2f  \n", imposto);
    return 0;
}
