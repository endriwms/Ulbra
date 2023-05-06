public class Main {
  public static void main(String[] args) {
    Pessoa pessoa = new Pessoa("João", "Rua A, 123");
    Cliente cliente = new Cliente("Maria", "Rua B, 456", "1234-5678-9012-3456");

    System.out.println(pessoa.getNome()); // Imprime "João"
    System.out.println(cliente.getNome()); // Imprime "Maria"
    System.out.println(cliente.getNumeroCartao()); // Imprime "1234-5678-9012-3456"

  }
}