/*
Ejercicio 5
Escribe un programa que escriba la tabla de multiplicar de cualquier número entero dado
por el usuario, entre 1 y 10.
*/
class Program
{
    static void Main()
    {
        int num = LeeNumero("Introduce el primer número entero positivo: ");

        int sumaMultiploDeCinco = NumeroMultiplicado(num);

        Console.WriteLine($"{sumaMultiploDeCinco}");
    }

    static int LeeNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) && numero > 0)
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número entero positivo válido.");
        }
    }

    static int NumeroMultiplicado(int num)
    {
        int suma = 0;

        for (int i = 0; i <= 10; i++)
        {
            suma = num * i;
            Console.WriteLine(suma);
        }

        return suma;
    }
}