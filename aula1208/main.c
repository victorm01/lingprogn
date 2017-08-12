#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float area, perimetro, raio;
    printf("Digite o valor do R (raio) : \n");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("Area: %6.3f \n", area);
    perimetro = 2 * PI * raio;
    printf("Perimento: %6.3f \n", perimetro);
    return 0;
}
