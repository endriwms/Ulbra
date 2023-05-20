public class Eletronico extends Produto {
  private String modelo;
  private String fabricante;
  private double preco;

  public Eletronico(String modelo, String fabricante, double preco) {
    this.modelo = modelo;
    this.fabricante = fabricante;
    this.preco = preco;
  }

  public double calcularPreco() {
    return preco;
  }

  public void exibirDetalhes() {
    System.out.println("Eletrônico:");
    System.out.println("Modelo: " + modelo);
    System.out.println("Fabricante: " + fabricante);
    System.out.println("Preço: R$ " + preco);
  }
}