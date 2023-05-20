class MeioCampo extends Jogador {
  private String nome;
  private int numeroCamisa;

  public MeioCampo(String nome, int numeroCamisa) {
    this.nome = nome;
    this.numeroCamisa = numeroCamisa;
  }

  public void atacar() {
    System.out.println("Meio-campo " + nome + " (Camisa " + numeroCamisa + ") está avançando para o ataque.");
  }

  public void defender() {
    System.out.println("Meio-campo " + nome + " (Camisa " + numeroCamisa + ") está ajudando na defesa.");
  }
}