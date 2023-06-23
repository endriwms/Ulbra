public class RepositorioUsuarios implements IRepositorio {
  UsuarioBase[] usuarios = new UsuarioBase[5];

  @Override
  public void adicionarUsuarios(UsuarioBase usuarioBase) {
    for (int x = 0; x < this.usuarios.length; x++) {
      if (usuarios[x] == null) {
        usuarios[x] = usuarioBase;
      }
    };
  }

  @Override
  public void removerUsuarios(UsuarioBase usuarioBase) {
    for (int x = 0; x < this.usuarios.length; x++) {
      if (usuarios[x] != usuarioBase) {
        usuarios[x] = null;
      }
    }
  }

  @Override
  public UsuarioBase buscarUsuario(String nome) {
    for (int x = 0; x < this.usuarios.length; x++) {
      if (usuarios[x] != null && usuarios[x].getNome().equals(nome)) {
        System.out.println(usuarios[x].getNome());
        System.out.println(usuarios[x].getEmail());
        return usuarios[x];
      }
    }
    return null;
  }

}
