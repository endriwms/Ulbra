public class Conta {
  private double saldo;
  private int numero;

  public Conta(int numero, double saldo) {
    this.numero = numero;
    this.saldo = saldo;
  }

  public double getSaldo() {
    return saldo;
  }

  public int getNumero() {
    return numero;
  }
}
