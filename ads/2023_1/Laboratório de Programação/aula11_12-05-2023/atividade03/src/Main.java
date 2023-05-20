public class Main {
  public static void main(String[] args) {
    Cachorro cachorro = new Cachorro();
    Gato gato = new Gato();
    Peixe peixe = new Peixe();

    System.out.println("Ações do cachorro:");
    cachorro.comer();
    cachorro.dormir();
    cachorro.mover();

    System.out.println("Ações do gato:");
    gato.comer();
    gato.dormir();
    gato.mover();

    System.out.println("Ações do peixe:");
    peixe.comer();
    peixe.dormir();
    peixe.mover();
  }
}