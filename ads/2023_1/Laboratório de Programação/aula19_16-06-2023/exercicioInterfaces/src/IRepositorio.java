public interface IRepositorio {
  void adicionarUsuarios(UsuarioBase usuarioBase);
  void removerUsuarios(UsuarioBase usuarioBase);

  UsuarioBase buscarUsuario(String nome);

}
