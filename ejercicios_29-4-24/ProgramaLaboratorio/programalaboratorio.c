/*************************************************************
 *Programa: Ejemplo Clase 2
 *
 *  Objetivo:
 *      -Realizar un programa que solicite cinco números e imprima por pantalla el
 *       promedio, el máximo y el minimo.
 *
 *  Aspectos a destacar:
 *      - El uso de bucles para pedir un número tras otro
 *      - El uso de acumuladores, se tiene que guardar la suma para luego hacer el promedio
 *      - El uso del if para preguntar si e lnumero ingresado es mayor o menor para guardar los
 *      máximos y mínimo.
 *
 *  Version 0.1 del 29 de Abril de 2024
 *  Autor Felipe Arce
 *
 *************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;

    // Solicito el primero número el cual por ser el primero sera tanto el
    // Maximo como el minimo y el primer número a ser acumulado

    printf("Ingrese un número:");
    scanf("%d", &auxiliarInt);
    maximo = auxiliarInt;
    minimo = auxiliarInt;
    acumulador = auxiliarInt;

    // Solicito el resto de los numeros

    for (i = 0; i < 4; i++)
    {
        printf("Ingrese un número:");
        scanf("%d", &auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if (auxiliarInt > maximo)
        {
            maximo = auxiliarInt;
        }

        if (auxiliarInt < minimo)
        {
            minimo = auxiliarInt;
        }
    }

    printf("El maximo es %i \n", maximo);
    printf("El minimo es %i \n", minimo);
    printf("El promedio es %i \n", acumulador / 5);

    return 0;
}