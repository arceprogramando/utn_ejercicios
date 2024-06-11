/*
Escriba un programa en C que solicite 10 números enteros positivos al usuario y
calcule y muestre los siguientes valores:
• La suma de todos los números leídos.
• La media de los números.
• El mayor número introducido.
• El menor número introducido.

*/

#include <stdio.h>

int main(){
    int numeros[10], suma = 0, mayor, menor;
    float media;
    for(int i = 0; i < 10; i++){
        printf("Introduce un numero entero positivo: ");
        scanf("%d", &numeros[i]);
        suma += numeros[i];
        if(i == 0){
            mayor = menor = numeros[i];
        }else{
            if(numeros[i] > mayor){
                mayor = numeros[i];
            }
            if(numeros[i] < menor){
                menor = numeros[i];
            }
        }
    }
    media = (float)suma / 10;
    printf("La suma de los numeros es %d\n", suma);
    printf("La media de los numeros es %.2f\n", media);
    printf("El mayor numero introducido es %d\n", mayor);
    printf("El menor numero introducido es %d\n", menor);
    return 0;
}

/* Esto seria un ejemplo de un programa que utiliza numeros[10] que es un array de 10 elementos de tipo entero, 
y que se utiliza para almacenar los 10 numeros enteros positivos que el usuario introduce por teclado.
 La variable suma se utiliza para almacenar la suma de los numeros introducidos, y las variables mayor y menor
  se utilizan para almacenar el mayor y el menor numero introducido respectivamente. 
  La variable media se utiliza para almacenar la media de los numeros introducidos. 
  El bucle for se utiliza para recorrer el array numeros y almacenar los numeros introducidos por el usuario en cada una
   de las posiciones del array. En cada iteracion del bucle se actualiza la variable suma con el valor del numero introducido,
    y se actualizan las variables mayor y menor si el numero introducido es mayor o menor que el valor actual de estas variables.
     Al final del bucle se calcula la media de los numeros introducidos y se muestran por pantalla los valores de la suma, la media,
      el mayor y el menor numero introducido.
*/