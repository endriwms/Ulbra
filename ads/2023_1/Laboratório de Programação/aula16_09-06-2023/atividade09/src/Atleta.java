class Atleta implements IAndador, ICorredor {
  @Override
  public void andar() {
    System.out.println("O atleta está andando.");
  }

  @Override
  public void correr() {
    System.out.println("O atleta está correndo.");
  }
}