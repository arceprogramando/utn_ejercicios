/*
Escriba un programa que pida al usuario un numero, y muestre el mensaje "has
introducido el numero ---" (mostrando el numero que ha sido introducido). Esta acción
debe repetirse hasta que el usuario introduzca el numero 0. En ese momento se
mostrará el mensaje "Finalizando: Se ha introducido el numero 0". Además, se debe
mostrar cuántos numeros se han introducido y su suma.

 */

#include <stdio.h>

int main(){
    int num, suma = 0, contador = 0;
    do{
        printf("Introduce un numero: ");
        scanf("%d", &num);
        suma += num;
        contador++;
        printf("Has introducido el numero %d\n", num);
    }while(num != 0);

    printf("Finalizando: Se ha introducido el numero 0\n");
    printf("Se han introducido %d numeros y su suma es %d\n", contador, suma);
    return 0;
}