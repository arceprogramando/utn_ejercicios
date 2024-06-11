/*Escriba un programa en C que muestre en pantalla los numeros enteros del 100 al 1.*/

#include <stdio.h>

int main()
{
    int i;
    for (i = 100; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}