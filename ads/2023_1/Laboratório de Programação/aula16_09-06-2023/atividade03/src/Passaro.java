class Pássaro implements Voador {
  @Override
  public void decolar() {
    System.out.println("O pássaro decolou.");
  }

  @Override
  public void voar() {
    System.out.println("O pássaro está voando.");
  }

  @Override
  public void aterrar() {
    System.out.println("O pássaro aterrou.");
  }
}