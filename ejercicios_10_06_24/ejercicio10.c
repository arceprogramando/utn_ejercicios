/*
Escriba un programa en C que solicite números al usuario hasta que se hayan
introducido 10 números o la suma de todos los números leídos sea mayor que 100. A
continuación mostrar un mensaje indicando qué condición se ha cumplido (es decir, si
se han introducido 10 números o si su suma es mayor que 100).
*/

#include <stdio.h>

int main(){
    int numeros[10], suma = 0;
    for(int i = 0; i < 10; i++){
        printf("Introduce un numero entero: ");
        scanf("%d", &numeros[i]);
        suma += numeros[i];
        if(suma > 100){
            printf("La suma de los numeros introducidos es mayor que 100\n");
            return 0;
        }
    }
    printf("Se han introducido 10 numeros\n");
    return 0;
}