/*
Escriba un programa en C que permita introducir 5 números enteros por teclado y
muestre el menor de ellos.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero: ");
    scanf("%d", &num3);
    printf("Introduce el cuarto numero: ");
    scanf("%d", &num4);
    printf("Introduce el quinto numero: ");
    scanf("%d", &num5);
    int menor = num1;
    if(num2 < menor)
    {
        menor = num2;
    }
    if(num3 < menor)
    {
        menor = num3;
    }
    if(num4 < menor)
    {
        menor = num4;
    }
    if(num5 < menor)
    {
        menor = num5;
    }
    printf("El menor de los numeros es: %d\n", menor);

    return 0;
}