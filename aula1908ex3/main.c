#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novoSalario;
    printf("Digite o valor do salario:   \n");
    scanf("%f", &salario);
    novoSalario = salario > 1000 ? salario * 1.05 : salario * 1.07;
    printf("Novo salario:  %6.2f \n", novoSalario);
    return 0;
}
