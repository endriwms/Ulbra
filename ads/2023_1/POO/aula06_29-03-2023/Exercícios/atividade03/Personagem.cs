using System;

namespace Aula06_herança_atividade03
{
  public class Personagem{
    public string Nome { get; set; }
    public int Forca { get; set; }
    public int Inteligencia { get; set; }
    public string[] Poderes { get; set; }

    public Personagem(string nome, int forca, int inteligencia, string[] poderes) {
      Nome = nome;
      Forca = forca;
      Inteligencia = inteligencia;
      Poderes = poderes;
    }
    public virtual void Lutar(Personagem oponente) {
      Console.WriteLine(Nome + " está lutando com " + oponente.Nome);
      // implementação da lógica de luta aqui
    }
  }

    public class Heroi : Personagem {
    public Heroi(string nome, int forca, int inteligencia, string[] poderes) : base(nome, forca, inteligencia, poderes) { }

    public override void Lutar(Personagem oponente) {
      Console.WriteLine(Nome + " está lutando com " + oponente.Nome);
      Console.WriteLine(Nome + " está defendendo...");
      Console.WriteLine(Nome + " está atacando...");
      Console.WriteLine(Nome + " venceu a luta!");
    }
  }

  public class Vilao : Personagem {
    public Vilao(string nome, int forca, int inteligencia, string[] poderes) : base(nome, forca, inteligencia, poderes) { }

    public override void Lutar(Personagem oponente) {
      Console.WriteLine(Nome + " está lutando com " + oponente.Nome);
      Console.WriteLine(Nome + " está atacando...");
      Console.WriteLine(Nome + " está defendendo...");
      Console.WriteLine(Nome + " venceu a luta!");
    }
  }

  public class SuperHeroi : Heroi {
    public SuperHeroi(string nome, int forca, int inteligencia, string[] poderes) : base(nome, forca, inteligencia, poderes) { }

    public void SuperPoder(){
      // implementação da lógica do super poder aqui
      Console.WriteLine(Nome + " usou seu super poder...");
    }
  }

  public class SuperVilao : Vilao {
    public SuperVilao(string nome, int forca, int inteligencia, string[] poderes) : base(nome, forca, inteligencia, poderes) { }
    public void SuperPoder() {
      // implementação da lógica do super poder aqui
      Console.WriteLine(Nome + " usou seu super poder...");  
    }
  }
}