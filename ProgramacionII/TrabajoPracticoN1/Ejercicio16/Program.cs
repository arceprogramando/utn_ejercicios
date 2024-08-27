/*
Ejercicio 16
El usuario tecleará dos números (x e y), y el programa deberá calcular cual es el resultado de su
división y el resto de esa división.
*/

class Program
{
    static void Main()
    {
        double num1 = LeerNumero("Ingrese el primer número: ");
        double num2 = LeerNumero("Ingrese el segundo número: ");

        Console.WriteLine($"El resultado de la división es de: {num1 / num2}");
        Console.WriteLine($"El resultado de el resto de la  división es de: {num1 % num2}");

    }

    static double LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero))
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número:");
        }
    }
}