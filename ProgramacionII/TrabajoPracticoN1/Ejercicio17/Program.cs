/*
Ejercicio 17
Diseña un algoritmo que calcule el IVA (16%) de un producto dado su precio de venta sin IVA.
*/

class Program
{
    static void Main()
    {
        decimal precio = LeerNumero("Ingrese el precio: ");

        Console.WriteLine($"El precio de el producto es ${precio}");
        Console.WriteLine($"El precio del producto con IVA es ${precio * 1.16m}");

    }

    static decimal LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (decimal.TryParse(input, out decimal numero))
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número:");
        }
    }
}