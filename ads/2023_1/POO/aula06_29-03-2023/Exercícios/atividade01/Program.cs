using System;

public class Program{
  public static void Main(){
    Animal animal1 = new Cachorro();
    animal1.Nome = "Floki";
    animal1.Falar();

    Animal animal2 = new Gato();
    animal2.Nome = "Ragnar";
    animal2.Falar();
  }
}
