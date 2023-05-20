class Dinheiro extends Pagamento {
  private double valorRecebido;

  public Dinheiro(double valorRecebido) {
    this.valorRecebido = valorRecebido;
  }

  public void realizarPagamento() {
    System.out.println("Pagamento realizado em dinheiro: " + valorRecebido);
  }

  public void emitirRecibo() {
    System.out.println("Recibo emitido para pagamento em dinheiro: " + valorRecebido);
  }
}
