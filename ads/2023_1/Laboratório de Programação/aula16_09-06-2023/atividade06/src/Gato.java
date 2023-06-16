class Gato implements IAnimal {
  @Override
  public void comer() {
    System.out.println("O gato está comendo.");
  }

  @Override
  public void dormir() {
    System.out.println("O gato está dormindo.");
  }
}