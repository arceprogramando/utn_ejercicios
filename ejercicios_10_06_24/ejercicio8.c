/*
Escriba un programa que eleve un número a una potencia, utilizando dos métodos: a)
utilizando la función potencia y b) usando un bucle, sin recurrir al operador potencia.
Nota: En C, para poder usar la función potencia (pow(x, y)=x
y
) es necesario incluir la
biblioteca math (#include <math.h>).

*/

#include <stdio.h>
#include <math.h>

int potencia(int base, int exponente){
    return pow(base, exponente);
}

int main(){
    int base, exponente;
    printf("Introduce la base: ");
    scanf("%d", &base);
    printf("Introduce el exponente: ");
    scanf("%d", &exponente);
    printf("El resultado de elevar %d a %d es %d\n", base, exponente, potencia(base, exponente));
    return 0;
}

