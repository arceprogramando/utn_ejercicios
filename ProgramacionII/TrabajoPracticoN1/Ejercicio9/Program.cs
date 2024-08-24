/*
Ejercicio 9
Escribe una aplicación que reciba del usuario el radio de un círculo como un entero, y que
imprima el diámetro de la circunferencia y el área del círculo mediante el uso del valor de
punto flotante 3.14159 para PI. También puede utilizar la constante predefinida Math.PI
para el valor. Esta constante es más precisa que el valor 3.14159. La clase Math se define
en el namespace System. Las clases en este paquete se importan de manera automática,
por lo que no necesita importar la clase Math mediante la instrucción using para usarla. Use
las siguientes fórmulas (r es el radio):
diámetro = 2 r
circunferencia = 2 * PI * r
área = PI * r
*/

class Program
{
    static void Main()
    {
        int radio = PedirRadio("Ingrese el radio del circulo:");

        Diametro(radio);

        Circunferencia(radio);

        Area(radio);

    }

    static int PedirRadio(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) && numero > 0)
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número de radio entero correcto.");
        }
    }

    static void Diametro(int radio)
    {
        int diametro = radio * 2;
        Console.WriteLine($"El Diametro del radio es: {diametro}");
    }

    static void Circunferencia(int radio)
    {
        double circunferencia = 2 * Math.PI * radio;
        Console.WriteLine($"La circunferencia del radio es: {circunferencia:N4}");

    }

    static void Area(int radio)
    {
        double area = Math.PI * radio;
        Console.WriteLine($"El area del radio es: {area:N4}");

    }
}