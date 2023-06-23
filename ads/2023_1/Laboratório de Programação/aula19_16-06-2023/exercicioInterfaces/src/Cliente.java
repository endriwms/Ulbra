public class Cliente extends UsuarioBase {
  public Cliente(String nome, String email, String senha) {
    super(nome, email, senha);
  }

  public void fazerCompra() {
    System.out.println("Cliente Realizando uma compra...");
  }
}
