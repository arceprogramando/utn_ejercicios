/*
Ejercicio 4
Escribe un programa que escriba todos los divisores de un número n entero positivo
introducido por el usuario.
*/


class Program
{
    static void Main()
    {
        int num = LeerNumero("Introduce un número: ");

        EscribirDivisores(num);

    }

    static int LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero)) return numero;

            Console.WriteLine("Por favor, introduce un número válido");
        }
    }

    static int EscribirDivisores(int numero)
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