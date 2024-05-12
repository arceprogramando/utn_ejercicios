// 1.c) Escribe un programa que pregunte la hora, y conteste con un mensaje: “Hora
// introducida ok.Son las 18 : 30 : 00(por ejemplo)”.

#include <stdio.h>

    int main(){

    int hora, minutos, segundos;

    printf("Ingrese la hora [hs, min, seg]\n");
    scanf("%d", &hora);
    scanf("%d", &minutos);
    scanf("%d" ,&segundos);

    printf("La hora es : %d:%d:%d  \n", hora , minutos,segundos);
    return 0;
}