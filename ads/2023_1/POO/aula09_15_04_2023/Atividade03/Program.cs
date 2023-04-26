using Atividade03;

class Program
{
    static void Main(string[] args)
    {
        Cachorro cachorro = new Cachorro();
        cachorro.Nome = "Mel";
        cachorro.Dono = "Felipe";

        Gato gato = new Gato();
        gato.Nome = "Fox";
        gato.Dono = "Endriw";

        Console.WriteLine("Cachorro(a): Nome: " + cachorro.Nome + ", Dono: " + cachorro.Dono);
        Console.WriteLine("Gato(a): Nome: " + gato.Nome + ", Dono: " + gato.Dono);
    }
}