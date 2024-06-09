/*
Escriba un programa que solicite un numero, y si éste es de dos cifras, muestre por
pantalla los siguientes valores:
 Suma de sus dos dígitos.
 Cuántos de sus dígitos son pares.
Nota: para saber si es de dos cifras, compárelo con 9 y 99. Para calcular los dígitos use
la división entera y el resto.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    if(num > 9 && num < 100)
    {
        int dig1 = num / 10;
        int dig2 = num % 10;
        printf("Suma de sus dígitos: %d\n", dig1 + dig2);
        int pares = 0;
        if(dig1 % 2 == 0)
        {
            pares++;
        }
        if(dig2 % 2 == 0)
        {
            pares++;
        }
        printf("Cantidad de dígitos pares: %d\n", pares);
    }
    else
    {
        printf("El numero no es de dos cifras\n");
    }

    return 0;
}