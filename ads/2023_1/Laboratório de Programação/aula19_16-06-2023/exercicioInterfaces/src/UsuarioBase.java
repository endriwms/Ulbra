abstract class UsuarioBase implements IUsuario {
  private String nome;
  private String email;
  private String senha;

  public UsuarioBase(String nome, String email, String senha) {
    this.nome = nome;
    this.email = email;
    this.senha = senha;
  }

  @Override
  public String getNome() {
    return nome;
  }

  @Override
  public String getEmail() {
    return email;
  }

  @Override
  public String getSenha() {
    return senha;
  }

  @Override
  public void setNome(String nome) {
    this.nome = nome;
  }

  @Override
  public void setEmail(String email) {
    this.email = email;
  }

  @Override
  public void setSenha(String senha) {
    this.senha = senha;
  }
}
