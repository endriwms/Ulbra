using Atividade04;

class Program
{
    static void Main(string[] args)
    {
        Calculadora calculadora = new Calculadora();

        double a = 10;
        double b = 5;

        Console.WriteLine($"Soma de {a} + {b} = " + calculadora.Somar(a, b));
        Console.WriteLine($"Subtração de {a} - {b} = " + calculadora.Subtrair(a, b));
        Console.WriteLine($"Multiplicação de {a} * {b} = " + calculadora.Multiplicar(a, b));
        Console.WriteLine($"Divisão de {a} / {b} = " + calculadora.Dividir(a, b));
    }
}