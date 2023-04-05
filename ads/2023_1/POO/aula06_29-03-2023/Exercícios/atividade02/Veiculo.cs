using System;

public abstract class Veiculo {
  public string Modelo { get; set; }

  public abstract void Acelerar();
}

public class Carro : Veiculo {
  public override void Acelerar() {
    Console.WriteLine("Acelerando carro!");
  }
}

public class Moto : Veiculo {
  public override void Acelerar() {
    Console.WriteLine("Acelerando moto!");
  }
}
