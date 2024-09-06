/*
Ejercicio 5
Escribe un programa que escriba la tabla de multiplicar de cualquier número entero dado por el usuario, entre 1 y 10.
*/

using System;

namespace Ejercicio5
{
    class Program
    {
        static void Main()
        {
            int num = EntradaDatos.ObtenerNumero("Introduce un número entero entre 1 y 10: ");

            if (num >= 1 && num <= 10)
            {
                Calculos.MostrarTablaMultiplicar(num);
            }
            else
            {
                Console.WriteLine("El número debe estar entre 1 y 10.");
            }
        }
    }

    class EntradaDatos
    {
        public static int ObtenerNumero(string mensaje)
        {
            while (true)
            {
                Console.Write(mensaje);
                string? input = Console.ReadLine();

                if (int.TryParse(input, out int numero) && numero >= 1 && numero <= 10)
                {
                    return numero;
                }

                Console.WriteLine("Por favor, introduce un número entero entre 1 y 10.");
            }
        }
    }

    class Calculos
    {
        public static void MostrarTablaMultiplicar(int num)
        {
            Console.WriteLine($"Tabla de multiplicar del {num}:");
            for (int i = 1; i <= 10; i++)
            {
                Console.WriteLine($"{num} x {i} = {num * i}");
            }
        }
    }
}