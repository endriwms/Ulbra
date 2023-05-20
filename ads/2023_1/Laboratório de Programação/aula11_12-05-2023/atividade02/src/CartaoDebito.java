class CartaoDebito extends Pagamento {
  private String numeroCartao;
  private String dataValidade;

  public CartaoDebito(String numeroCartao, String dataValidade) {
    this.numeroCartao = numeroCartao;
    this.dataValidade = dataValidade;
  }

  public void realizarPagamento() {
    System.out.println("Pagamento realizado com cartão de débito " + numeroCartao);
  }

  public void emitirRecibo() {
    System.out.println("Recibo emitido para pagamento com cartão de débito " + numeroCartao);
  }
}