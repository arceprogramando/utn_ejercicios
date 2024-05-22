/*
Alumnos:
Felipe Aleman Arce
Nahuel Castro
Vicki Diaz Francesca
Lombardo Micaela

5-Verificar si un número es mayor que 100.
*/

#include <stdio.h>
// incluyo la libreria
int main()
{
    int num;
    // declaro num
    // pido el numero
    printf("Ingrese un numero ");
    // guardo el numero
    scanf(" %d", &num);

    // si numero es mayor a 100
    if (num > 100)
    {
        // retorno directamente el printf
        return  printf("El numero es mayor que 100");
    }

    // como si ya fue positivo salio con el return ahora pasa solamente a negativo
    return printf("El numero es menor");
}