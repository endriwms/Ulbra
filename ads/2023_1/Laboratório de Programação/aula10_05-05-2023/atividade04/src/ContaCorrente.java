public class ContaCorrente extends Conta {
  private double limite;

  public ContaCorrente(int numero, double saldo, double limite) {
    super(numero, saldo);
    this.limite = limite;
  }

  public double getLimite() {
    return limite;
  }
}
