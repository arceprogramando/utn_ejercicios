/*
Ejercicio 2
Escribe un programa que tome un año introducido por el usuario y diga si es bisiesto o no. Recuerda
que los años múltiplos de 4 son bisiestos, excepto aquellos que son múltiplos de 100 y no lo
son de 400. Es decir, el año 2000 sí es bisiesto, pero no lo son el 1990 ni el 2100.
*/

namespace Ejercicio2
{
    class Program
    {
        static void Main()
        {
            int anio = EntradaDatos.SolicitarAnio(); 

            if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
            {
                Console.WriteLine("Año bisiesto");
            }
            else
            {
                Console.WriteLine("Año no bisiesto");
            }
        }
    }

    class EntradaDatos
    {

        public static int SolicitarAnio()
        {
            return LeerNumero("Introduce el año: ");
        }
        private static int LeerNumero(string mensaje)
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
