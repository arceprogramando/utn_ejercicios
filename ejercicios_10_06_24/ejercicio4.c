/*Escriba un programa que muestre en pantalla todos los múltiplos de 3 entre los
numeros 1 y 100. */

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}