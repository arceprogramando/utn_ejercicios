/*
Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de
las horas trabajadas y el precio cobrado por hora. Ambos valores deben ser solicitados
al usuario. La jornada normal es de 40 horas semanales. Las horas extra se pagan un
cincuenta por ciento más caras que las normales, y pasan a pagarse al doble que las
normales a partir de las 50 horas trabajadas.
*/

#include <stdio.h>

int main(){
    float horas, precio, salario;
    printf("Introduce las horas trabajadas: ");
    scanf("%f", &horas);
    printf("Introduce el precio por hora: ");
    scanf("%f", &precio);
    if(horas <= 40){
        salario = horas * precio;
    }else if(horas <= 50){
        salario = 40 * precio + (horas - 40) * precio * 1.5;
    }else{
        salario = 40 * precio + 10 * precio * 1.5 + (horas - 50) * precio * 2;
    }
    printf("El salario semanal es: %.2f\n", salario);

    return 0;
}