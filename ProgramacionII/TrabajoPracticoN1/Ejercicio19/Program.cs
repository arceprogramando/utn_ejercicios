/*
Ejercicio 19
Diseña un programa que, a partir del valor de los dos lados de un rectángulo ( por ejemplo: 4 y 6 metros, respectivamente), muestre el valor de su perímetro (en metros) y el de su  ́área (en metros cuadrados). (por ejemplo: El perímetro debe darte 20 metros y el  ́área 24 metros cuadrados.)
*/

class Program
{
    static void Main()
    {

        EntradaDatos entradaDatos = new EntradaDatos();
        
        int primerLado = entradaDatos.LeerNumero("Ingrese el primer lado del rectangulo: ");
        int segundoLado = entradaDatos.LeerNumero("Ingrese el segundo lado del rectangulo: ");

        Rectangulo rectangulo = new Rectangulo(primerLado,segundoLado);
        
        Console.WriteLine($"El perímetro del rectángulo es: {rectangulo.CalcularPerimetro()} metros");
        Console.WriteLine($"El área del rectángulo es: {rectangulo.CalcularArea()} metros cuadrados");

    }

    class EntradaDatos
    {
        public int LeerNumero(string mensaje)
        {
            while (true)
            {
                Console.Write(mensaje);
                string? input = Console.ReadLine();

                if (input != null && int.TryParse(input, out int numero))
                {
                    return numero;
                }

                Console.WriteLine("Por favor, introduce un número entero válido.");
            }
        }
    }
}

class Rectangulo
{
    public int Lado1 { get; }
    public int Lado2 { get; }

    public Rectangulo(int lado1, int lado2)
    {
        Lado1 = lado1;
        Lado2 = lado2;
    }

    public int CalcularPerimetro()
    {
        return 2 * (Lado1 + Lado2);
    }

    public int CalcularArea()
    {
        return Lado1 * Lado2;
    }
}