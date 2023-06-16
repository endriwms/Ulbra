class Fatura implements IPagavel {
  @Override
  public void pagar() {
    System.out.println("A fatura foi paga.");
  }

  @Override
  public void verificarPagamento() {
    System.out.println("Verificando pagamento da fatura.");
  }
}