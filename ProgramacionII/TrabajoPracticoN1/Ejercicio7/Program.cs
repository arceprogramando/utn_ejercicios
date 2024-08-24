/*
Ejercicio 7
Escribe el programa para un juego que consista en averiguar un número. El programa nos
indicará cada vez si el número introducido es mayor o menor que la constante almacenada
que tendremos que averiguar. Cuando se descubre el número mostrara un mensaje de
felicitación.
*/

class Program
{
    static void Main()
    {
        Random random = new();
        int numeroPorAdivinar = random.Next(1000);
        Console.WriteLine(numeroPorAdivinar);
        int intentoAdivinar = PedirNumero("Adivina El numero:");


        while (numeroPorAdivinar != intentoAdivinar)
        {

            bool mayor = numeroPorAdivinar > intentoAdivinar;

            if (mayor)
            {
                Console.WriteLine("El número es mayor.");
            }
            else
            {
                Console.WriteLine("El número es menor.");
            }

            intentoAdivinar = PedirNumero("Inténtalo de nuevo: ");
        }

        Console.WriteLine("Numero correcto , Felicidades !!");

    }

    static int PedirNumero(string mensaje)
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
}