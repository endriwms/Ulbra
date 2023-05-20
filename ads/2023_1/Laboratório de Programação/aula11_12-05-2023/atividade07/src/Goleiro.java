public class Goleiro extends Jogador {
  private String nome;
  private int numeroCamisa;

  public Goleiro(String nome, int numeroCamisa) {
    this.nome = nome;
    this.numeroCamisa = numeroCamisa;
  }

  public void atacar() {
    System.out.println("Goleiro " + nome + " (Camisa " + numeroCamisa + ") está se juntando ao ataque.");
  }

  public void defender() {
    System.out.println("Goleiro " + nome + " (Camisa " + numeroCamisa + ") está defendendo o gol.");
  }
}