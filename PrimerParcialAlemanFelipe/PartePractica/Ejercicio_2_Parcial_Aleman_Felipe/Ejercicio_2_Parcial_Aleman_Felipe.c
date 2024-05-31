/* EJERCICIO 2
Cree un programa que calcule el promedio de las  notas  de los dos
parciales de un alumno de la materia sistema de procesamiento de datos.
Si la nota es mayor a 6, se deberá imprimir en pantalla, el alumno ha
promocionado, si no cumple con la condición deberá de mostrar en pantalla
“el alumno es regular y debe rendir final”
*/

#include <stdio.h>

int main()
{
    // como espero valores que pueden ser decimales como notas como 5.5 o la division de promedios lo meto en float
    float promedio , nota1, nota2;

    // le pregunto a la persona que escriba la primera nota
    printf("Introduce la primera nota :\n");
    scanf(" %f", &nota1);

    // le digo a la persona que escriba la segunda nota
    printf("Introduce la segunda nota :\n");
    scanf(" %f", &nota2);

    // guardo en la variable Promedio , las notas diviidida su cantidad
    promedio = (nota1 + nota2) / 2;

    // imprimo el promedio con dos espacios decimales
    printf("El promedio es: %.2f \n", promedio);

    // verifico si el promedio es mayor a 6
    if (promedio > 6)
    {
        // si es asi el alumno a promocionado
        printf("El alumno ha promocionado\n");
    }
    else
    {
        // sino el alumno sigue siendo regular y tiene que rendir final
        printf("El alumno es regular y debe rendir final\n");
    }

    // retorno 0 
    return 0;
}