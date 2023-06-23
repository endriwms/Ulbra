public class Main {
  public static void main(String[] args) {
    Animal animal1 = new Animal("Leão", 5, 200.0, "Felino");
    Animal animal2 = new Animal("Elefante", 10, 3000.0, "Proboscídeo");
    Mamifero mamifero1 = new Mamifero("Urso", 3, 500.0, "Ursidae", "Pelagem grossa");
    Ave ave1 = new Ave("Papagaio", 2, 0.5, "Psittacidae", 0.75);
    Funcionario funcionario1 = new Funcionario("João", "Tratador", 2000.0);
    Funcionario funcionario2 = new Funcionario("Maria", "Veterinário", 3000.0);
    Veterinario veterinario1 = new Veterinario("Carlos", "Veterinário", 3500.0, "Animais selvagens");

    Zoo zoo = new Zoo(10, 5);

    zoo.adicionarAnimal(animal1);
    zoo.adicionarAnimal(animal2);
    zoo.adicionarAnimal(mamifero1);
    zoo.adicionarAnimal(ave1);
    zoo.adicionarFuncionario(funcionario1);
    zoo.adicionarFuncionario(funcionario2);
    zoo.adicionarFuncionario(veterinario1);

    mamifero1.amamentar();
    ave1.voar();
    ave1.realizarTruque();

    veterinario1.realizarExame(animal1);
    veterinario1.realizarExame(animal2);
  }
}