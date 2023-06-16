class Cheque implements IPagavel {
  @Override
  public void pagar() {
    System.out.println("O cheque foi utilizado para pagamento.");
  }

  @Override
  public void verificarPagamento() {
    System.out.println("Verificando pagamento do cheque.");
  }
}