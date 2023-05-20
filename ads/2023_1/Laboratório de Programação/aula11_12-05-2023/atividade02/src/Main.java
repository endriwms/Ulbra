public class Main {
  public static void main(String[] args) {
    CartaoCredito cartaoCredito = new CartaoCredito("1234 5678 9012 3456", "12/25");
    CartaoDebito cartaoDebito = new CartaoDebito("9876 5432 1098 7654", "12/25");
    Dinheiro dinheiro = new Dinheiro(100.0);

    System.out.println("Pagamento com cartão de crédito:");
    cartaoCredito.realizarPagamento();
    cartaoCredito.emitirRecibo();

    System.out.println("Pagamento com cartão de débito:");
    cartaoDebito.realizarPagamento();
    cartaoDebito.emitirRecibo();

    System.out.println("Pagamento em dinheiro:");
    dinheiro.realizarPagamento();
    dinheiro.emitirRecibo();
  }
}