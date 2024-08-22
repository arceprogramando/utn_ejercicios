/*
Ejercicio 41
Escriba un programa que simule un lanzamiento de moneda . Por cada lanzamiento de moneda, el
programa deberá imprimir Cara o Cruz. Permita que el programa lance la moneda 100 veces y
cuente el número de veces que aparece cada lado de la moneda. Imprima los resultados. El
programa debe llamar a una función aparte llamada resultado, la cual no tiene argumentos y
devuelve 0 para Cara y 1 para Cruz. [Nota: Si el programa simula de manera realista el lanzamiento
de monedas, entonces cada lado debe aparecer aproximadamente la mitad de las veces, para un
total de 50 Caras y 50 Cruces.]
*/

class Program
{
    static void Main()
    {
        Console.WriteLine("Bienvenido al lanzamiento de moneda");

        int contadorCara = 0;
        int contadorCruz = 0;

        for (int i = 0; i < 100; i++)
        {
            int resultadoactual = Resultado();

            if (resultadoactual == 0)
            {
                contadorCara++;
                Console.WriteLine("Cara");

            }
            if (resultadoactual == 1) {
                contadorCruz++;
                Console.WriteLine("Cruz");

            }
        }

        Console.WriteLine($"ContadorCara: {contadorCara}");
        Console.WriteLine($"ContadorCruz: {contadorCruz}");


    }

    static int Resultado()
    {
        Random random = new();
        int randomValue = random.Next(2);
        return randomValue;
    }
}