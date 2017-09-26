#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Hello world!\n");
    printf("Introduce el valor del que quieres saber su división entre dos.");
    scanf("%f", &x);
    printf("%.2f/2=%.2f", x, x/2);
    return 0;
}
