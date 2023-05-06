public class ContaCorrente extends Conta{
  double limite;

  @Override
  void sacar() {
    System.out.println("Sacando da conta Corrente");
  }

  void depositar() {
    System.out.println("Depositando na conta corrente");
  }
}
