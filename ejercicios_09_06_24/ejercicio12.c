/*
Escriba un programa que pida al usuario un número entre el uno y el siete y muestre un
mensaje con el nombre del día correspondiente
*/

#include <stdio.h>

int main(){
    int dia;
    printf("Introduce un numero entre el uno y el siete: ");
    scanf("%d", &dia);
    switch(dia){
        case 1:
            printf("EL dia elegido es: Lunes\n");
            break;
        case 2:
            printf("EL dia elegido es: Martes\n");
            break;
        case 3:
            printf("EL dia elegido es: Miercoles\n");
            break;
        case 4:
            printf("EL dia elegido es: Jueves\n");
            break;
        case 5:
            printf("EL dia elegido es: Viernes\n");
            break;
        case 6:
            printf("EL dia elegido es: Sabado\n");
            break;
        case 7:
            printf("EL dia elegido es: Domingo\n");
            break;
        default:
            printf("Numero no valido\n");
    }

    return 0;
}