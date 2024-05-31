// incluyo la libreria standard input output para poder meter inputs o mostrar ouput
#include <stdio.h>

// innecesario actuamente incluir stdlib ya que son para metodos que no usamos en el codigo
#include <stdlib.h>

// se inicializa la funcion
int main()
{
    // se declara el primer entero num
    int num;

    // imprimo por pantalla para que ingrese el numero
    printf("Introduce un numero: \n");
    // aca lo guarda en la variable num
    scanf("%i", &num);

    // si el numero es menor a 5
    if(num > 5 )
    {
        // retorno esto
        printf("El numero es mayor que 5. \n");
    } // sino si el numero es menor a 5
    else if (num < 5)
    {
        // imprimo esto
        printf("El numero es menor que 5. \n");
    }else // sino 
    {
        // imprimo esto
        printf("El numero es igual a 5. \n ");
    }

    system("PAUSE"); // Pausa y no retorna nada ,pide un enter para continuar creo que se usa para debuggear
}


