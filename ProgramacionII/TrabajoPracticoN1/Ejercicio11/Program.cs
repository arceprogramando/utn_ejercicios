/*
Ejercicio 11
Escribe una aplicación que reciba como entrada un entero que contenga sólo dígitos 0 y 1 (es decir,
un entero binario), y que imprima su equivalente decimal. [Sugerencia: use los operadores residuo
y división para elegir los dígitos del número binario uno a la vez, de derecha a izquierda. En el
sistema numérico binario, el dígito más a la derecha tiene un valor posicional de 1, el siguiente dígito
a la izquierda tiene un valor posicional de 2, luego 4, luego 8, etcétera. El equivalente decimal del
número binario 1101 es 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 = 13].
*/

class Program
{
    static void Main()
    {
        int binario = LeerNumeroBinario("Ingrese un número binario (solo dígitos 0 y 1): ");

        ConvertirBinarioADecimal(binario);

    }

    static int LeerNumeroBinario(string mensaje)
    {
        while (true)
        {
            Console.Write(mensaje);
            string? input = Console.ReadLine();

            if (int.TryParse(input, out int numero) && EsBinario(numero))
            {
                return numero;
            }

            Console.WriteLine("Por favor, introduce un número binario válido (solo 0 y 1).");
        }
    }

    static bool EsBinario(int numero)
    {
        while (numero > 0)
        {
            int digito = numero % 10;
            if (digito != 0 && digito != 1)
            {
                return false;
            }
            numero /= 10;
        }
        return true;
    }

    static void ConvertirBinarioADecimal(int binario)
    {
        int decimalResultado = 0;
        int posicion = 0;

        while (binario > 0)
        {
            int digito = binario % 10;
            
            decimalResultado += digito * (int)Math.Pow(2, posicion);
            
            binario /= 10;
            posicion++;
        }
        
        Console.WriteLine($"El equivalente decimal del binario {binario} es: {decimalResultado}");
    }
}
