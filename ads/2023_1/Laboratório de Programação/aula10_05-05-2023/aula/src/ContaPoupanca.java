public class ContaPoupanca extends Conta{
  double rendimento;

  @Override
  void sacar() {
    System.out.println("Sacando da conta poupança");
  }

  void depositar() {
    System.out.println("Depositando na conta poupança");
  }

}
