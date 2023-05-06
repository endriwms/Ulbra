public class Carro extends Veiculo {
  private int numPassageiros;

  public Carro(String marca, String modelo, int numPassageiros) {
    super(marca, modelo);
    this.numPassageiros = numPassageiros;
  }

  public int getNumPassageiros() {
    return numPassageiros;
  }
}
