using atividade01;

Console.WriteLine("Digite o primeiro número: ");
int num1 = int.Parse(Console.ReadLine());

Console.WriteLine("Digite o segundo número: ");
int num2 = int.Parse(Console.ReadLine());

var calc = new Calculadora();

int soma = calc.Somar(num1, num2);
int subtracao = calc.Subtrair(num1, num2);

Console.WriteLine("O resultado da soma é: " + soma);
Console.WriteLine("O resultado da subtração é: " + subtracao);
