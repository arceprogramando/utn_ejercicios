/*
Ejercicio 8
Escribe un programa que solicite un número entero positivo N y luego N números enteros adicionales. 
El programa debe calcular e imprimir la suma de todos los números comprendidos entre el mayor y el menor de los N números ingresados.
*/
class Program
{
    static void Main()
    {
        int cantidadNumeros = PedirNumero("¿Que cantidad de numeros desea probar?: ");
        
        int[] numeros = new int[cantidadNumeros];

        // Solicitar al usuario los N números
        for (int i = 0; i < cantidadNumeros; i++)
        {
            numeros[i] = PedirNumero($"Ingrese el número {i + 1}: ");
        }

        // Encontrar el mayor y el menor de los números ingresados
        int mayor = EncontrarMayor(numeros);
        int menor = EncontrarMenor(numeros);

        // Calcular la suma de los números comprendidos entre el menor y el mayor
        int suma = SumarNumerosEntre(menor, mayor);

        // Mostrar el resultado
        Console.WriteLine($"La suma de los números comprendidos entre {menor} y {mayor} es: {suma}");
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

    static int EncontrarMayor(int[] numeros)
    {
        int mayor = numeros[0];
        foreach (int num in numeros)
        {
            if (num > mayor)
            {
                mayor = num;
            }
        }
        return mayor;
    }

    static int EncontrarMenor(int[] numeros)
    {
        int menor = numeros[0];
        foreach (int num in numeros)
        {
            if (num < menor)
            {
                menor = num;
            }
        }
        return menor;
    }

    static int SumarNumerosEntre(int menor, int mayor)
    {
        int suma = 0;
        for (int i = menor; i <= mayor; i++)
        {
            suma += i;
        }
        return suma;
    }
}