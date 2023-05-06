import java.time.LocalDate;

public class ProdutoPerecivel extends Produto {
  private LocalDate dataValidade;

  public ProdutoPerecivel(int codigo, double preco, LocalDate dataValidade) {
    super(codigo, preco);
    this.dataValidade = dataValidade;
  }

  public LocalDate getDataValidade() {
    return dataValidade;
  }
}
