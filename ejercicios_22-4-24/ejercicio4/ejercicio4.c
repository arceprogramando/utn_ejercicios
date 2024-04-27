// Copiar codigo

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;

    num1 = 10;
    num2 = 8;

    // Suma
    resultado = num1 + num2;
    printf("El resultado de la suma es : %i \n", resultado);

    // Resta

    resultado = num1 - num2;
    printf("El resultado de la resta es :%i \n", resultado);

    // Multiplicacion

    resultado = num1 * num2;
    printf("El resultado de la multiplicacion es :%i \n", resultado);

    // Division

    resultado = num1 / num2;
    printf("El resultado de la division es :%i \n", resultado);

    // system("Pause"); // este comando no sirve para linux
    return 0;
}