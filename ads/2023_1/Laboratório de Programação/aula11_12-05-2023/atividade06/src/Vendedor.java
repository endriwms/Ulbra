public class Vendedor extends Funcionario {
  private String nome;
  private double salarioBase;

  public Vendedor(String nome, double salarioBase) {
    this.nome = nome;
    this.salarioBase = salarioBase;
  }

  public double calcularSalario(double comissao) {
    return salarioBase + comissao;
  }

  public double calcularSalario() {
    return salarioBase;
  }

  public void realizarTarefa() {
    System.out.println("Vendedor " + nome + " está realizando suas tarefas.");
  }
}