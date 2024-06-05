/*
¿Cuál es el resultado de evaluar la siguiente expresión? 
Suponga que la variable n tiene el valor 6.0 y la variable valor 2.0 y ambos son de tipo float.
Escriba la expresión equivalente a esta utilizando paréntesis.
minut = 25.0 + 120 * n / valor

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n, valor, minut;

    n = 6.0;
    valor = 2.0;
    minut = 25.0 + 120 * n / valor;
    printf("El resultado de la expresion es: %.2f   \n", minut);

    minut = 25.0 + (120 * n) / valor;

    printf("El resultado de la expresión equivalente es: %.f\n", minut);
    system("PAUSE");
    return 0;
}