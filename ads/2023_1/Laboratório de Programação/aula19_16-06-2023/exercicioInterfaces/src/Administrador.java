public class Administrador extends UsuarioBase {
  public Administrador(String nome, String email, String senha) {
    super(nome, email, senha);
  }

  public void gerenciarUsuarios() {
    System.out.println("Administrador gerenciando usuários...");
  }
}
