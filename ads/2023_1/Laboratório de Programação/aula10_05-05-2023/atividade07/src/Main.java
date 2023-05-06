import java.time.LocalDate;

public class Main {
  public static void main(String[] args) {
    Produto produto = new Produto(123, 50.0);
    ProdutoPerecivel produtoPerecivel = new ProdutoPerecivel(456, 20.0, LocalDate.of(2023, 12, 31));

    System.out.println(produto.getCodigo()); // Imprime 123
    System.out.println(produto.getPreco()); // Imprime 50.0

    System.out.println(produtoPerecivel.getCodigo()); // Imprime 456
    System.out.println(produtoPerecivel.getPreco()); // Imprime 20.0
    System.out.println(produtoPerecivel.getDataValidade()); // Imprime 2023-12-31
  }
}