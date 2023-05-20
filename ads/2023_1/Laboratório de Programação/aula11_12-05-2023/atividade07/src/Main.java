public class Main {
  public static void main(String[] args) {
    Atacante atacante = new Atacante("Ronaldo", 9);
    MeioCampo meioCampo = new MeioCampo("Zidane", 5);
    Goleiro goleiro = new Goleiro("Buffon", 1);

    atacante.atacar();
    atacante.defender();

    meioCampo.atacar();
    meioCampo.defender();

    goleiro.atacar();
    goleiro.defender();
  }
}