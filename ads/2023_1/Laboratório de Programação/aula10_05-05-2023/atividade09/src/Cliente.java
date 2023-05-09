public class Cliente extends Pessoa {
  private String numeroCartao;

  public Cliente(String nome, String endereco, String numeroCartao) {
    super(nome, endereco);
    this.numeroCartao = numeroCartao;
  }

  // getters e setters para o atributo "numeroCartao"
  public String getNumeroCartao() {
    return numeroCartao;
  }

  public void setNumeroCartao(String numeroCartao) {
    this.numeroCartao = numeroCartao;
  }
}
