/*
Escriba un programa que pida una temperatura en grados Farenheit y la pase a Celsius.
NOTA: celsius = (farenheit -32)*5/9

*/
#include <stdio.h>

int main(){
    float farenheit, celsius;
    printf("Introduce la temperatura en grados Farenheit: ");
    scanf("%f", &farenheit);
    celsius = (farenheit - 32) * 5 / 9;
    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
    return 0;
}