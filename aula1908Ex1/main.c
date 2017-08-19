#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto, salarioLiquido, imposto;
    printf("Digite valor do salario bruto: \n");
    scanf("%f", &salarioBruto);
    if(salarioBruto < 1000){
        imposto = salarioBruto * 0.05;
    }else{
        if(salarioBruto < 5000){
            imposto = salarioBruto * 0.11;
        }else{
            imposto = salarioBruto * 0.35;
        }
    }
    salarioLiquido = salarioBruto - imposto;
    printf("Salario Bruto --------->     %6.2f   \n", salarioBruto);
    printf("Imposto ---------------->      %6.2f  \n", imposto);
    printf("Salario a Receber--->     %6.2f  \n", salarioLiquido);
    return 0;
}
