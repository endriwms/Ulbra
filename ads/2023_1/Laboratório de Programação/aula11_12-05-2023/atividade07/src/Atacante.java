public class Atacante extends Jogador {
  private String nome;
  private int numeroCamisa;

  public Atacante(String nome, int numeroCamisa) {
    this.nome = nome;
    this.numeroCamisa = numeroCamisa;
  }

  public void atacar() {
    System.out.println("Atacante " + nome + " (Camisa " + numeroCamisa + ") está atacando.");
  }

  public void defender() {
    System.out.println("Atacante " + nome + " (Camisa " + numeroCamisa + ") está voltando para defender.");
  }
}