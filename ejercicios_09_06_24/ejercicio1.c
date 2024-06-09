/*
Escriba un programa que lea un numero entero y escriba un mensaje si el numero es
mayor que 100
*/

#include <stdio.h>

int main(){
    int num;
    printf("Introduce un numero entero: ");
    scanf("%d", &num);
    if(num > 100) 
    {
    printf("El numero %d es mayor que 100\n", num);
    }

    return 0;
}