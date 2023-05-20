public class Main {
  public static void main(String[] args) {
    ImpressoraJatoTinta impressoraJatoTinta = new ImpressoraJatoTinta();
    ImpressoraLaser impressoraLaser = new ImpressoraLaser();
    ImpressoraMatricial impressoraMatricial = new ImpressoraMatricial();

    impressoraJatoTinta.imprimir();
    impressoraJatoTinta.escanear();

    impressoraLaser.imprimir();
    impressoraLaser.escanear();

    impressoraMatricial.imprimir();
    impressoraMatricial.escanear();
  }
}