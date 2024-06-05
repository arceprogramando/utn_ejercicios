/*
Escriba un programa que lea tres enteros (a, b, c) y muestre por pantalla un 1 si los
valores introducidos siguen un orden creciente (a>b>c) y 0 en caso contrario.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int orden;

    printf("Introduce el valor de a: ");
    scanf("%d", &a);
    printf("Introduce el valor de b: ");
    scanf("%d", &b);
    printf("Introduce el valor de c: ");
    scanf("%d", &c);

    if (a > b && b > c)
    {
        orden = 1;
    }
    else
    {
        orden = 0;
    }

    printf("El orden es: %d\n", orden);

    return 0;
}