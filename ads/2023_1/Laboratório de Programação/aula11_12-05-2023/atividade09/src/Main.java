public class Main {
  public static void main(String[] args) {
    Caminhao caminhao = new Caminhao();
    Trem trem = new Trem();
    Navio navio = new Navio();

    caminhao.carregar();
    caminhao.descarregar();

    trem.carregar();
    trem.descarregar();

    navio.carregar();
    navio.descarregar();
  }
}