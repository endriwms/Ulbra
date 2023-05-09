public class Main {
  public static void main(String[] args) {
    ContaCorrente contaCorrente = new ContaCorrente();
    contaCorrente.limite = 1000;
    contaCorrente.numeroConta = 12345;
    contaCorrente.saldo = 100000;

    contaCorrente.sacar();
  }
}