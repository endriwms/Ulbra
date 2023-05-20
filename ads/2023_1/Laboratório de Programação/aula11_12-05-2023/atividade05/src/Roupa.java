public class Roupa extends Produto {
  private String marca;
  private String tamanho;
  private double preco;

  public Roupa(String marca, String tamanho, double preco) {
    this.marca = marca;
    this.tamanho = tamanho;
    this.preco = preco;
  }

  public double calcularPreco() {
    return preco;
  }

  public void exibirDetalhes() {
    System.out.println("Roupa:");
    System.out.println("Marca: " + marca);
    System.out.println("Tamanho: " + tamanho);
    System.out.println("Preço: R$ " + preco);
  }
}