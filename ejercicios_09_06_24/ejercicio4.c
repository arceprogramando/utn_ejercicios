/*
Escriba un programa en C que pida dos numeros enteros al usuario, y determine cuál es
mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
que sean iguales.
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Introduce un numero entero: ");
    scanf("%d", &num1);
    printf("Introduce otro numero entero: ");
    scanf("%d", &num2);
    if(num1 > num2)
    {
        printf("El numero %d es mayor que %d\n", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("El numero %d es menor que %d\n", num1, num2);
    }
    else
    {
        printf("Los numeros %d y %d son iguales\n", num1, num2);
    }

    return 0;
}