/*
Ejercicio 3
Escribe un programa que calcule el factorial de n donde n es un número entero mayor o
igual que cero dado por el usuario.
*/
using System.Numerics;
class Program
{

    static void Main()
    {
        int num = LeeNumero("Ingrese un numero para calcular la factorial:");

        if(num < 0)
        {
            Console.WriteLine("El número debe ser mayor o igual a cero.");
            return; 
        }

    BigInteger tempResult = 1;
        
        for (int i = 1; i <= num; i++)
        {
            tempResult *= i;
        }

        Console.WriteLine($"El resultado es {tempResult}");

    }

    static int LeeNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero)) return numero;

            Console.WriteLine("Por favor, introduce un número valido.");
        }
    }
}