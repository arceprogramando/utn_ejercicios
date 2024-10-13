namespace Vehiculo
{
     public class Vehiculo
    {


        public virtual void ArrancarMotor(string sonidoAlArrancar)
        {
            if (string.IsNullOrEmpty(sonidoAlArrancar))
            {
                throw new ArgumentException($"'{nameof(sonidoAlArrancar)}' no puede ser nulo ni estar vacío.", nameof(sonidoAlArrancar));
            }

            Console.WriteLine($"Arranca el motor del vehiculo {sonidoAlArrancar}");
        }

        public void Pararmotor(string sonidoAlParar)
        {
            Console.WriteLine($"Parando el motor {sonidoAlParar}");
        }

       
    }
}
