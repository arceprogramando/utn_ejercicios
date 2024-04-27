// Ejercicio 5
// Realiza un programa con 3 variables, dos para números enteros, y otra llamada"resultado".
// Inicializa las variables numéricas con los valores 7 y 2,
// respectivamente y Muestra por pantalla la resta de estos dos números.
// Muestra por pantalla la suma de estos dos números,
//  multiplicada por 10. Y ese 10, será el valor de una constante creada con
// anterioridad por nosotros.Intenta realizar el mismo ejercicio sin la creación de la variable "resultado".

#include <stdio.h>

#define MULTIPLICADOR 10

int main()
{
    int num1 = 7, num2 = 2;

    printf("La resta de %i y %i \n", num1, num2);
    printf("El resultado es: %i\n\n", num1 + num2);

    printf("La suma de %i y %i, multiplicada por %i\n", num1, num2, MULTIPLICADOR);
    printf("El resultado es: %i\n", (num1 + num2) * MULTIPLICADOR);

    // system("Pause"); // este comando no sirve para linux
    return 0;
}