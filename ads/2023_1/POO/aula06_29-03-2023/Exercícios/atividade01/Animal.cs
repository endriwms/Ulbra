using System;

public abstract class Animal {
  public string Nome { get; set; }
  public abstract void Falar();
}

public class Cachorro : Animal {
  public override void Falar(){
    Console.WriteLine("Au au!");
  }
}

public class Gato : Animal {
  public override void Falar(){
    Console.WriteLine("Miau!");
  }
}