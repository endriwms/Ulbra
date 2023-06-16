class Deposito implements IPagavel {
  @Override
  public void pagar() {
    System.out.println("O pagamento foi realizado via depósito.");
  }

  @Override
  public void verificarPagamento() {
    System.out.println("Verificando pagamento por depósito.");
  }
}