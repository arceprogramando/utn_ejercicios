/*
Ejercicio 1
Escribe un programa que tome 3 números enteros introducidos por el usuario mediante el teclado y determine cuántos de dichos números son diferentes, el promedio, la suma de todos, el producto del mayor por el menor y si el número restante es divisible por 3.
*/

namespace Ejercicio1
{
    class Program
    {
        static void Main()
        {
            EntradaDatos entradaDatos = new EntradaDatos();
            int num1 = entradaDatos.LeerNumero("Introduce el primer número: ");
            int num2 = entradaDatos.LeerNumero("Introduce el segundo número: ");
            int num3 = entradaDatos.LeerNumero("Introduce el tercer número: ");

            int contadorDiferentes = 0;
            if (num1 != num2 && num1 != num3) contadorDiferentes++;
            if (num2 != num1 && num2 != num3) contadorDiferentes++;
            if (num3 != num1 && num3 != num2) contadorDiferentes++;

            int sum = num1 + num2 + num3;
            double promedio = sum / 3.0;

            int max = Math.Max(Math.Max(num1, num2), num3);
            int min = Math.Min(Math.Min(num1, num2), num3);

            int product = max * min;

            int numeroRestante = num1 + num2 + num3 - max - min;

            bool isDivisibleBy3 = numeroRestante % 3 == 0;

            Console.WriteLine($"\nNúmeros diferentes: {contadorDiferentes}");
            Console.WriteLine($"Suma: {sum}");
            Console.WriteLine($"Promedio: {promedio:F2}");
            Console.WriteLine($"Producto del mayor por el menor: {product}");
            Console.WriteLine($"El número restante ({numeroRestante}) es divisible por 3: {isDivisibleBy3}");
        }

    }

    class EntradaDatos
    {
        public int LeerNumero(string mensaje)
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
}