/*
Ejercicio 15
Crear un programa que pida al usuario dos números enteros y diga si el primero es múltiplo del
segundo (pista: igual que antes, habrá que ver si el resto de la división es cero: a % b == 0).
*/

class Program
{
    static void Main()
    {
        int num1 = LeerNumero("Ingrese el primer número: ");
        int num2 = LeerNumero("Ingrese el segundo número: ");


        string mensaje = (num1 % num2 == 0) ? "El primero es múltiplo del segundo." : "No es múltiplo";

        Console.WriteLine(mensaje);



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

            Console.WriteLine("Por favor, introduce un número:");
        }
    }
}