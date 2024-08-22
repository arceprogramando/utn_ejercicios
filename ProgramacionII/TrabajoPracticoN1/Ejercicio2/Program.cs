/*
Ejercicio 2
Escribe un programa que tome un anio introducido por el usuario y diga si es bisiesto o no. Recuerda
que los anios múltiplos de 4 son bisiestos, excepto aquellos que son múltiplos de 100 y no lo
son de 400. Es decir, el anio 2000 si es bisiesto, pero no lo son el 1990 ni el 2100.
*/

class Program
{
    static void Main()
    {
        int anio = LeerAnio("Introduce el primer número: ");


        if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
        {
            Console.WriteLine("anio Bisiesto");
        }
        else
        {
            Console.WriteLine("anio no bisiesto");

        }

    }

    static int LeerAnio(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero)) return numero;

            Console.WriteLine("Por favor, introduce un número válido.");
        }
    }
}