/*
Escriba un programa en C que pida dos numeros enteros al usuario, y determine si el
primero es divisible entre el segundo.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Introduce un numero entero: ");
    scanf("%d", &num1);
    printf("Introduce otro numero entero: ");
    scanf("%d", &num2);
    if(num1 % num2 == 0)
    {
        printf("El numero %d es divisible entre %d\n", num1, num2);
    }
    else
    {
        printf("El numero %d no es divisible entre %d\n", num1, num2);
    }

    return 0;
}