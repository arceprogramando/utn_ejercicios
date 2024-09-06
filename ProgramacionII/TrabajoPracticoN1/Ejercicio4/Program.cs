/*
Ejercicio 4
Escribe un programa que escriba todos los divisores de un número n entero positivo introducido por el usuario.
*/

namespace Ejercicio4
{
    class Program
    {
        static void Main()
        {
            int num = EntradaDatos.Divisores();

            int divisores = Calculos.ObtenerYContarDivisores(num);

            Console.WriteLine($"La cantidad de divisores de {num} es {divisores}");
        }

    }

    class EntradaDatos
    {

        public static int Divisores()
        {
            return LeerNumero("Introduce el numero para sacar los divisores:");
        }
        private static int LeerNumero(string mensaje)
        {
            while (true)
            {
                Console.Write(mensaje);
                string? input = Console.ReadLine();

                if (input != null && int.TryParse(input, out int numero))
                {
                    return numero;
                }

                Console.WriteLine("Por favor, introduce un número entero válido.");
            }
        }
    }

    class Calculos
    {
        public static int ObtenerYContarDivisores(int numero)
        {
            int contadorDivisores = 0;

            for (int i = 1; i <= numero; i++)
            {
                if (numero % i == 0)
                {
                    Console.WriteLine(i);
                    contadorDivisores++;
                }
            }

            return contadorDivisores;
        }
    }
}
