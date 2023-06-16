class Guitarra implements IMusical {
  @Override
  public void tocar() {
    System.out.println("A guitarra está tocando.");
  }

  @Override
  public void parar() {
    System.out.println("A guitarra parou de tocar.");
  }

  @Override
  public void pausar() {
    System.out.println("A guitarra está pausada.");
  }
}