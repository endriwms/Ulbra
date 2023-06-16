class Bateria implements Carregável, Descarregável {
  private int capacidade;

  public Bateria(int capacidade) {
    this.capacidade = capacidade;
  }

  @Override
  public void carga() {
    System.out.println("Bateria carregada. Capacidade: " + capacidade + "mAh");
  }
}