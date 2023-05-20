public class Main {
  public static void main(String[] args) {
    DiscoRigido discoRigido = new DiscoRigido();
    PenDrive penDrive = new PenDrive();
    CartaoSD cartaoSD = new CartaoSD();

    discoRigido.lerDados();
    discoRigido.gravarDados();

    penDrive.lerDados();
    penDrive.gravarDados();

    cartaoSD.lerDados();
    cartaoSD.gravarDados();
  }
}