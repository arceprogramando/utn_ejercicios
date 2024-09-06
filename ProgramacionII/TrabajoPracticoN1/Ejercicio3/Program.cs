/*
Ejercicio 3
Escribe un programa que calcule el factorial de n donde n es un número entero mayor o igual que cero dado por el usuario.
*/

using System;
using System.Numerics;

namespace Ejercicio3
{
    class Program
    {
        static void Main()
        {
            int num = LeeNumero("Ingrese un número para calcular el factorial: ");

            BigInteger factorial = Calculos.CalcularFactorial(num);

            Console.WriteLine($"El resultado del factorial de {num} es {factorial}");
        }

        static int LeeNumero(string mensaje)
        {
            while (true)
            {
                Console.Write(mensaje);
                string? input = Console.ReadLine();

                if (int.TryParse(input, out int numero))
                {
                    if (numero >= 0)
                    {
                        return numero;
                    }
                    else
                    {
                        Console.WriteLine("El número debe ser mayor o igual a 0.");
                    }
                }
                else
                {
                    Console.WriteLine("Por favor, introduce un número entero válido.");
                }
            }
        }
    }

    class Calculos
    {
        public static BigInteger CalcularFactorial(int num)
        {
            BigInteger tempResult = 1;

            for (int i = 1; i <= num; i++)
            {
                tempResult *= i;
            }

            return tempResult;
        }
    }
}
