/*
Ejercicio 20
Realizar un programa para contar los alumnos que no llegan al 1.20 m , los que están entre 1.20 y
1.50, entre 1.50 y 1.60 y los que tienen más de 1.60m de altura.
*/

namespace Ejercicio20
{
    class Program
    {
        static void Main()
        {
            EntradaDatos entradaDatos = new EntradaDatos();
            int cantidadAlumnos = entradaDatos.SolicitarCantidadAlumnos();

            if (cantidadAlumnos < 2)
            {
                Console.WriteLine("Debe ingresar al menos dos alumnos para comparar.");
                return;
            }

            List<double> alturas = entradaDatos.LeerAlturas(cantidadAlumnos);
            ContadorAlturas contador = new ContadorAlturas();
            contador.ContarAlturas(alturas);
        }
    }

    class EntradaDatos
    {
        public int SolicitarCantidadAlumnos()
        {
            Console.WriteLine("Ingrese la cantidad de alumnos que desea comparar: ");
            return LeerNumero("Cantidad de alumnos: ");
        }

        public List<double> LeerAlturas(int cantidad)
        {
            List<double> alturas = new List<double>();
            for (int i = 0; i < cantidad; i++)
            {
                double altura = LeerNumeroDecimal($"Ingrese la altura del alumno #{i + 1} en metros: ");
                alturas.Add(altura);
            }
            return alturas;
        }

        private int LeerNumero(string mensaje)
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

        private double LeerNumeroDecimal(string mensaje)
        {
            while (true)
            {
                Console.Write(mensaje);
                string? input = Console.ReadLine();

                if (input != null && double.TryParse(input, out double numero))
                {
                    return numero;
                }

                Console.WriteLine("Por favor, introduce un número válido.");
            }
        }
    }

    class ContadorAlturas
    {
        public void ContarAlturas(List<double> alturas)
        {
            int menosDe120 = 0;
            int entre120y150 = 0;
            int entre150y160 = 0;
            int masDe160 = 0;

            foreach (double altura in alturas)
            {
                if (altura < 1.20)
                {
                    menosDe120++;
                }
                else if (altura >= 1.20 && altura <= 1.50)
                {
                    entre120y150++;
                }
                else if (altura > 1.50 && altura <= 1.60)
                {
                    entre150y160++;
                }
                else
                {
                    masDe160++;
                }
            }

            Console.WriteLine($"\nAlumnos que no llegan a 1.20m: {menosDe120}");
            Console.WriteLine($"Alumnos entre 1.20m y 1.50m: {entre120y150}");
            Console.WriteLine($"Alumnos entre 1.50m y 1.60m: {entre150y160}");
            Console.WriteLine($"Alumnos con más de 1.60m: {masDe160}");
        }
    }
}