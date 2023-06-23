public class Main {
  public static void main(String[] args) {
    RepositorioUsuarios repositorio = new RepositorioUsuarios();
    Cliente cliente1 = new Cliente("João", "joao@joao.com", "12345");
    Administrador administrador1 = new Administrador("Admin", "admin@admin.com", "54321");

    repositorio.adicionarUsuarios(cliente1);
    repositorio.adicionarUsuarios(administrador1);

    repositorio.buscarUsuario("João");
  }
}