/*
Ejercicio 12
Crear un programa que use el operador condicional para mostrar un el valor absoluto de un número
de la siguiente forma: si el número es positivo, se mostrará tal cual; si es negativo, se mostrará
cambiado de signo.
*/

class Program
{
    static void Main()
    {
        int numero = LeerNumero("Ingrese un número negativo o positivo: ");
        Console.WriteLine(numero > 0 ? numero.ToString() : (-numero).ToString());
    }

    static int LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero))
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número negativo o positivo");
        }
    }
}