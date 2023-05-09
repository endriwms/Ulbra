public class Main {
  public static void main(String[] args) {
    Conta conta = new Conta(1234, 1000);
    ContaCorrente contaCorrente = new ContaCorrente(5678, 2000, 500);

    System.out.println("A conta de número " + conta.getNumero() + " tem saldo de " + conta.getSaldo() + " reais.");
    System.out.println("A conta corrente de número " + contaCorrente.getNumero() + " tem saldo de " + contaCorrente.getSaldo() + " reais e limite de " + contaCorrente.getLimite() + " reais.");

  }
}