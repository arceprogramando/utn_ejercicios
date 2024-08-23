/*
Ejercicio 29
Programa para poner notas: suspendido, aprobado, promocionado... con la nota numérica.
*/

class Program
{
    static void Main()
    {
        Console.WriteLine("----------------------");
        Console.WriteLine("\tNOTAS");
        Console.WriteLine("----------------------");

        int nota = RecibidorNotas("Introduce la nota: ");
        Console.WriteLine(nota);

    if(nota < 4 )  // suspendido 
    if(nota >= 4 && nota < 6 ) // aprobado
    if(nota >= 6 ) // promicionado


    }

    static int RecibidorNotas(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) ) return numero;

            
            Console.WriteLine("Por favor, introduce un número válido.");
        }
    }

}