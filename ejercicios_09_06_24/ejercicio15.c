/*
Escribir un programa que reciba un número de una carta de una baraja española e
imprima por pantalla: “As” si es un 1, “Sota”, si es un 10, “Caballo” si es un 11y “Rey”
si es un 12. Para números de cartas entre 2 y 9 (incluidos) debe imprimir: "No es as ni
figura". Para otros números debe imprimir: "este no es un número de una carta de la
baraja española".
*/

#include <stdio.h>

int main(){
    int carta;
    printf("Introduce un numero de carta: ");
    scanf("%d", &carta);
    switch(carta){
        case 1:
            printf("As\n");
            break;
        case 10:
            printf("Sota\n");
            break;
        case 11:
            printf("Caballo\n");
            break;
        case 12:
            printf("Rey\n");
            break;
        default:
            if(carta >= 2 && carta <= 9){
                printf("No es as ni figura\n");
            }else{
                printf("este no es un número de una carta de la baraja española\n");
            }
    }

    return 0;
}