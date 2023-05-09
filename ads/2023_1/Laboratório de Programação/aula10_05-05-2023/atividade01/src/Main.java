public class Main {
  public static void main(String[] args) {
    Pessoa pessoa = new Pessoa("João", 30);
    Funcionario funcionario = new Funcionario("Maria", 25, "Gerente");

    System.out.println(pessoa.getNome() + " tem " + pessoa.getIdade() + " anos.");
    System.out.println(funcionario.getNome() + " tem " + funcionario.getIdade() + " anos e é " + funcionario.getCargo() + ".");

  }
}