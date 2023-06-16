class Cachorro implements IAnimal {
  @Override
  public void comer() {
    System.out.println("O cachorro está comendo.");
  }

  @Override
  public void dormir() {
    System.out.println("O cachorro está dormindo.");
  }
}