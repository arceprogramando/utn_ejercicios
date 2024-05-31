/*EJERCICIO 1 
Realiza un programa que declara tres variables enteras :
"numero1", "numero2" y "resultado".Inicializa "numero1" con
el valor 5 y "numero2" con el valor 2. Calcula la suma de "numero1"
y "numero2" y multiplica el resultado por una constante previamente
definida llamada "CONSTANTE" con valor 3. 
Almacena el resultado en la variable "resultado" y muestra por pantalla
su valor.
*/

// incluyo la libreria standard input output de c
#include <stdio.h>  

// defino una constante valor 10 que lo que hace es cambiar una palabra agregandole el valor 10
#define CONSTANTE 10

int main()
{
    // declaro numero 1 ,2 y 3
    int numero1, numero2,resultado;

    // le doy los valores a la variable
    numero1 = 5;
    numero2 = 2;
    // guardo el resultado de la suma en la variable resultado que como siempre va a ser enteros tambien es un int
    resultado = numero1 + numero2;
    // muestro la primera vez resultado
    printf("suma de los dos numeros: %d \n", resultado);

    // guardo en resultado la multiplicacion con la constante definida
    resultado = resultado * CONSTANTE;

    //imprimo la nueva informacion dentro del resultado
    printf("Resultado multiplicado por la constante: %d \n ", resultado);

    // retorno 0 para salir de la funcion
    return 0;
}