/*
Escriba un programa en C que muestre el siguiente menú:
CALCULO DE AREAS
===========================
1 - Calcular el area de un triangulo
2 - Calcular el area de un trapecio
3 - Calcular el area de un rectangulo
Tras mostrar el menú, se solicitará al usuario que seleccione una opcion. En función de
la opcion seleccionada el programa deberá pedir los datos necesarios para calcular el
area, realizar el cálculo y mostrar el resultado por pantalla.
Nota: Recuerde que para usar la función raíz cuadrada (sqrt) debe incluir la librería
math.h.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int opcion;
    float base, altura, lado1, area;
    printf("CALCULO DE AREAS\n");
    printf("===========================\n");
    printf("1 - Calcular el area de un triangulo\n");
    printf("2 - Calcular el area de un trapecio\n");
    printf("3 - Calcular el area de un rectangulo\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Introduce la base del triangulo: ");
            scanf("%f", &base);
            printf("Introduce la altura del triangulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("El area del triangulo es: %.2f\n", area);
            break;
        case 2:
            printf("Introduce la base mayor del trapecio: ");
            scanf("%f", &base);
            printf("Introduce la base menor del trapecio: ");
            scanf("%f", &altura);
            printf("Introduce la altura del trapecio: ");
            scanf("%f", &lado1);
            area = ((base + altura) * lado1) / 2;
            printf("El area del trapecio es: %.2f\n", area);
            break;
        case 3:
            printf("Introduce la base del rectangulo: ");
            scanf("%f", &base);
            printf("Introduce la altura del rectangulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El area del rectangulo es: %.2f\n", area);
            break;
        default:
            printf("opcion no válida\n");
    }

    return 0;

}