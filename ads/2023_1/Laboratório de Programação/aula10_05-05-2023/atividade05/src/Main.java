public class Main {
  public static void main(String[] args) {
    Animal animal = new Animal();
    Cachorro cachorro = new Cachorro();

    animal.emitirSom(); // Imprime "Som do animal"
    cachorro.emitirSom(); // Também imprime "Som do animal"
    cachorro.latir(); // Imprime "Au au"
  }
}