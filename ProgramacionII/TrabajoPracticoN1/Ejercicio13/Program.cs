/*
Ejercicio 13
Crear un programa que pida al usuario dos números enteros y diga "Uno de los números es
positivo", "Los dos números son positivos" o bien "Ninguno de los números es positivo", según
corresponda.
*/

class Program
{
    static void Main()
    {
        int num1 = LeerNumero("Ingrese el primer número: ");
        int num2 = LeerNumero("Ingrese el segundo número: ");

        if(num1 > 0 && num2 > 0 ) {
            Console.WriteLine("Los dos números son positivos");
        }else if(num1 > 0 || num2 > 0 ) {
            Console.WriteLine("Uno de los números es positivo");
        }else{
            Console.WriteLine("Ninguno de los números es positivo");
        }
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
