/*

Pide una nota (número). Muestra la calificación según la nota:

0-3 : muy deficiente

4-5: insuficiente

6: suficiente

7: bien

8-9: notable

10: sobresaliente

*/

// incluyo la libria standard input output para los input y output
#include <stdio.h>

// creo la funcion
int main()
{
    // declaro una variable nota 
    int nota;
    // imprimo que ingrese la nota
    printf("Introduce una nota: ");

    // guarda la nota dentro del entero nota
    scanf("%d", &nota);

    // si la nota es igual a cero y la nota es menor igual a 3 
    if (nota >= 0 && nota <= 3)
    {
        //imprimo esto
        printf("Muy deficiente\n");
    }
        // SI LA NOTA ES MAYOR  o igual a 4 y la nota es menor igual a 5
    else if (nota >= 4 && nota <= 5)
    {
        // imprimo esto
        printf("Insuficiente\n");
    }
        // si la nota es igual a 6 
    else if (nota == 6)
    {
        // imprimo suficiente
        printf("Suficiente\n");
    }
        // si la nota es igual a 7
    else if (nota == 7)
    {
        // imprimo bien
        printf("Bien\n");
    }
    // si la nota es igual a 8 y nota igua ly menor igual a 9
    else if (nota >= 8 && nota <= 9)
    {
        // imprimo notable
        printf("Notable\n");
    }
        // si la nota es igual a 10 
    else if (nota == 10)
    {
        // imprimo esto
        printf("Sobresaliente\n");
    }else{
        printf(" no ingreso un numero \n");
    }

    return 0;
}