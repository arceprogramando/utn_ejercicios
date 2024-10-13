using System;

namespace Vehiculo
{
    class App
    {
        static void Main(string[] args)
        {
            Console.WriteLine("----------------------");
            Console.WriteLine("Probando Los Vehiculos");
            Console.WriteLine("----------------------");
            Console.WriteLine("\n");

            Console.WriteLine("Probando El coche");
            Console.WriteLine("----------------------");

            Coche miCoche = new();
            miCoche.ArrancarMotor("Vroom Vroom");
            miCoche.Acelerar();
            miCoche.Frenar();
            miCoche.Pararmotor("Swoosh");
            Console.WriteLine();

            Console.WriteLine("Probando El Avion");
            Console.WriteLine("----------------------");

            Avion miAvion = new();
            miAvion.ArrancarMotor("Woosh Woosh");
            miAvion.Despegar();
            miAvion.Aterrizar();
            miAvion.Pararmotor("Silencio");
        }
    }
}
