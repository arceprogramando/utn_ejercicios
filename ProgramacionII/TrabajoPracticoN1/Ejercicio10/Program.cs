class Program
{
    static void Main()
    {
        int cantidadDeEmpleados = CantidadDeEmpleados("Ingrese la cantidad de empleados:");

        Empleado[] empleados = new Empleado[cantidadDeEmpleados];

        for (int i = 0; i < cantidadDeEmpleados; i++)
        {
            Console.WriteLine($"\nEmpleado #{i + 1}");
            string nombre = LeerString("Ingrese el nombre del empleado: ");
            int horasTrabajadas = LeerNumero("Ingrese las horas trabajadas: ");
            decimal tarifaPorHora = LeerHorasTrabajadas("Ingrese la tarifa por hora: ");

            empleados[i] = new Empleado(nombre, horasTrabajadas, tarifaPorHora);
        }

        Console.WriteLine("\nSueldo bruto de cada empleado:");
        for (int i = 0; i < empleados.Length; i++)
        {
            Empleado empleado = empleados[i];
            decimal sueldoBruto = empleado.CalcularSueldoBruto();
            Console.WriteLine($"Empleado: {empleado.Nombre}, Sueldo Bruto: {sueldoBruto:C}");
        }
    }

    static int CantidadDeEmpleados(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) && numero > 0)
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce la cantidad de empleados correctamente:");
        }
    }

    static int LeerNumero(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) && numero >= 0)
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número válido.");
        }
    }

    static decimal LeerHorasTrabajadas(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (decimal.TryParse(input, out decimal numero) && numero >= 0)
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número válido.");
        }
    }

    static string LeerString(string mensaje)
    {
        Console.Write(mensaje);
        return Console.ReadLine() ?? string.Empty;
    }
}

class Empleado
{
    public string Nombre { get; set; }
    public int HorasTrabajadas { get; set; }
    public decimal TarifaPorHora { get; set; }

    public Empleado(string nombre, int horasTrabajadas, decimal tarifaPorHora)
    {
        Nombre = nombre;
        HorasTrabajadas = horasTrabajadas;
        TarifaPorHora = tarifaPorHora;
    }

    public decimal CalcularSueldoBruto()
    {
        if (HorasTrabajadas <= 40)
        {
            return HorasTrabajadas * TarifaPorHora;
        }
        else
        {
            int horasExtras = HorasTrabajadas - 40;
            decimal pagoHorasExtras = horasExtras * TarifaPorHora * 1.5m;
            return (40 * TarifaPorHora) + pagoHorasExtras;
        }
    }
}
