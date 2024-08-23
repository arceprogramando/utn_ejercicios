/*
Ejercicio 6
Escribe un programa que calcule la suma de todos los números múltiplos de 5
comprendidos entre dos enteros positivos leídos por teclado
*/
class Program
{
    static void Main()
    {
        int numero1 = LeeNumero("Introduce el primer número entero positivo: ");
        int numero2 = LeeNumero("Introduce el segundo número entero positivo: ");

        if (numero1 > numero2)
        {
            (numero1, numero2) = (numero2, numero1);
        }

        int sumaMultiploDeCinco = SumarMultiploDeCinco(numero1, numero2);

        Console.WriteLine($"La suma de todos los múltiplos de 5 entre {numero1} y {numero2} es: {sumaMultiploDeCinco}");
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

    static int SumarMultiploDeCinco(int numero1, int numero2)
    {
        int suma = 0;

        for (int i = numero1; i <= numero2; i++)
        {
            if (i % 5 == 0)
            {
                suma += i;
            }
        }

        return suma;
    }
}