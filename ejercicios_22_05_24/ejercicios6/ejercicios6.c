/*
Alumnos:
Felipe Aleman Arce
Nahuel Castro
Vicki Diaz Francesca
Lombardo Micaela

6 -Comprobar si un número es positivo o negativo.
*/

#include <stdio.h>
// incluyo la libreria

// creo la funcion
int main(){

    //declaro num
    int num;

    //pido el numero
    printf("Ingrese un numero ");
    // guardo el numero
    scanf(" %d", &num);

    // si num mayor igual a cero 
    if(num >= 0 )
    {
        // retorno directamente el print
        return printf("El numero es positivo");
    }

    // como si ya fue positivo salio con el return ahora pasa solamente a negativo
    return printf("El numero es negativo");
}
