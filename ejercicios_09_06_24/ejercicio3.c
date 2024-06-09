/*
Escriba un programa en C que pida un numero al usuario e indique si es par o impar.
En caso de que sea par indicar si es o no múltiplo de 3.
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Introduce un numero entero: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("El numero %d es par\n", num);
        if(num % 3 == 0)
        {
            printf("El numero %d es multiplo de 3\n", num);
        }
        else
        {
            printf("El numero %d no es multiplo de 3\n", num);
        }
    }
    else
    {
        printf("El numero %d es impar\n", num);
    }

    return 0;
}