public class Main {
  public static void main(String[] args) {
    Aviao aviao = new Aviao();
    Pássaro pássaro = new Pássaro();
    Superman superman = new Superman();

    aviao.decolar();
    aviao.voar();
    aviao.aterrar();

    pássaro.decolar();
    pássaro.voar();
    pássaro.aterrar();

    superman.decolar();
    superman.voar();
    superman.aterrar();
  }
}