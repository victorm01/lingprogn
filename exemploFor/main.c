#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exemplos com for \n");
    int i;
    /* for(i=0; i<100; i++){
        printf("%d ", ++i); //Incrementa 1 antes de imprimir
    }
    for(i=0; i<2600; i++){ //Laco normal
        printf("%d \n", i);
    } */
    for(i=1; i<=10; i++){
        if(i%3==0){
            continue;
        }
        printf("%d \n", i);
    }
    //printf("\nAcabou a espera \n");
    return 0;
}
