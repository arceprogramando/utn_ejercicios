/*
Escriba un programa que solicite al usuario tres numeros enteros de una cifra y muestre
el mensaje "acceso permitido" si los numeros introducidos son “1”, “2” y “3”
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Introduce tres numeros enteros de una cifra: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == 1 && b == 2 && c == 3)
    {
        printf("Acceso permitido\n");
    }
    else
    {
        printf("Acceso denegado\n");
    }

    return 0;
}