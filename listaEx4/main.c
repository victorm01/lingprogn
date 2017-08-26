#include <stdio.h>
#include <stdlib.h>

int main()
{
    float far, cel;
    int i;
    for(i=0; i<=100; i++){
        cel = (i - 32) / 1.8;
        printf("%d farh ===> %.2f  celsius\n", i, cel);
    }

    return 0;
}
