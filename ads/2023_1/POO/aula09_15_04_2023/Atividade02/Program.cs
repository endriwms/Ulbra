using Atividade02;

class Program
{
    static void Main(string[] args)
    {
        string texto1 = "Hello World!";
        string texto2 = "Teste";
        string texto3 = "0123456789";

        IFormatadorTexto formatadorMaiusculo = new FormatadorMaiusculo();
        IFormatadorTexto formatadorMinusculo = new FormatadorMinusculo();
        IFormatadorTexto formatadorInvertido = new FormatadorInvertido();

        Console.WriteLine("Texto padrão 01: " + texto1);
        Console.WriteLine("Texto formatado maiúsculo 1: " + formatadorMaiusculo.Formatar(texto1));
        Console.WriteLine("Texto formatado minúsculo 1: " + formatadorMinusculo.Formatar(texto1));
        Console.WriteLine("Texto formatado invertido 1: " + formatadorInvertido.Formatar(texto1));
        Console.WriteLine();

        Console.WriteLine("Texto padrão 02: " + texto2);
        Console.WriteLine("Texto formatado maiúsculo 2: " + formatadorMaiusculo.Formatar(texto2));
        Console.WriteLine("Texto formatado minúsculo 2: " + formatadorMinusculo.Formatar(texto2));
        Console.WriteLine("Texto formatado invertido 2: " + formatadorInvertido.Formatar(texto2));
        Console.WriteLine();

        Console.WriteLine("Texto padrão 03: " + texto3);
        Console.WriteLine("Texto formatado maiúsculo 3: " + formatadorMaiusculo.Formatar(texto3));
        Console.WriteLine("Texto formatado minúsculo 3: " + formatadorMinusculo.Formatar(texto3));
        Console.WriteLine("Texto formatado invertido 3: " + formatadorInvertido.Formatar(texto3));
        Console.WriteLine();
    }
}