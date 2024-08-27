/*
Ejercicio 18
Algoritmo con introducción de varios números y el ordenador indica cual es mayor o si son iguales.
*/

class Program
{
    static void Main()
    {
        EntradaDatos entradaDatos = new EntradaDatos();
        ComparadorNumeros comparador = new ComparadorNumeros();

        int cantidadNumeros = entradaDatos.SolicitarCantidadNumeros();
        if (cantidadNumeros < 2)
        {
            Console.WriteLine("Debe ingresar al menos dos números para comparar.");
            return;
        }

        List<int> numeros = entradaDatos.LeerNumeros(cantidadNumeros);
        comparador.EvaluarNumeros(numeros);
    }
}

class EntradaDatos
{
    public int SolicitarCantidadNumeros()
    {
        Console.WriteLine("Ingrese la cantidad de números que desea introducir:");
        return LeerNumero("Cantidad de números: ");
    }

    public List<int> LeerNumeros(int cantidad)
    {
        List<int> numeros = new List<int>();
        for (int i = 0; i < cantidad; i++)
        {
            int numero = LeerNumero($"Ingrese el número #{i + 1}: ");
            numeros.Add(numero);
        }
        return numeros;
    }

    private int LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string input = Console.ReadLine();

            if (input != null && int.TryParse(input, out int numero))
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número entero válido.");
        }
    }
}

class ComparadorNumeros
{
    public void EvaluarNumeros(List<int> numeros)
    {
        int mayor = ObtenerMayor(numeros);
        bool todosIguales = VerificarTodosIguales(numeros);

        if (todosIguales)
        {
            Console.WriteLine("Todos los números son iguales.");
        }
        else
        {
            Console.WriteLine($"El número mayor es: {mayor}");
        }
    }

    private int ObtenerMayor(List<int> numeros)
    {
        int mayor = numeros[0];
        for (int i = 1; i < numeros.Count; i++)
        {
            if (numeros[i] > mayor)
            {
                mayor = numeros[i];
            }
        }
        return mayor;
    }

    private bool VerificarTodosIguales(List<int> numeros)
    {
        for (int i = 1; i < numeros.Count; i++)
        {
            if (numeros[i] != numeros[0])
            {
                return false;
            }
        }
        return true;
    }
}
