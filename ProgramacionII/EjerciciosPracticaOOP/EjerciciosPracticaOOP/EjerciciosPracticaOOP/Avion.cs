using System;

namespace Vehiculo
{
    class Avion : Vehiculo
    {
        public void Aterrizar()
        {
            Console.WriteLine("Aterrizando");
        }

        public void Despegar()
        {
            Console.WriteLine("Despegando");
        }

        public override void ArrancarMotor(string sonidoAlArrancar)
        {
            if (string.IsNullOrEmpty(sonidoAlArrancar))
            {
                throw new ArgumentException($"'{nameof(sonidoAlArrancar)}' no puede ser nulo ni estar vacío.", nameof(sonidoAlArrancar));
            }
            Console.WriteLine($"(Prueba de Polimorfismo con override)");

            Console.WriteLine($"Arranca el motor del avion {sonidoAlArrancar}");
        }
    }
}