using System;

public class Program {
  public static void Main() {
    Veiculo veiculo1 = new Carro();
    veiculo1.Modelo = "Fusca";
    veiculo1.Acelerar();

    Veiculo veiculo2 = new Moto();
    veiculo2.Modelo = "Harley Davidson";
    veiculo2.Acelerar();
  }
}
