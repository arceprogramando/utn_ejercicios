/*Escriba un programa en C que muestre en pantalla los numeros enteros del 1 al 100 de 2 en 2*/

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i+=2)
    {
        printf("%d\n", i);
    }
    return 0;
}