public class Main {
  public static void main(String[] args) {
    Livro livro = new Livro("Dom Quixote", "Miguel de Cervantes", 29.90);
    Roupa roupa = new Roupa("Nike", "M", 99.90);
    Eletronico eletronico = new Eletronico("iPhone 12", "Apple", 4999.90);

    livro.exibirDetalhes();
    System.out.println("Preço Total: R$ " + livro.calcularPreco());

    roupa.exibirDetalhes();
    System.out.println("Preço Total: R$ " + roupa.calcularPreco());

    eletronico.exibirDetalhes();
    System.out.println("Preço Total: R$ " + eletronico.calcularPreco());
  }
}