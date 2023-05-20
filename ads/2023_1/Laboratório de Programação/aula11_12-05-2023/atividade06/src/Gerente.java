public class Gerente extends Funcionario {
  private String nome;
  private double salarioBase;
  private double bonus;

  public Gerente(String nome, double salarioBase, double bonus) {
    this.nome = nome;
    this.salarioBase = salarioBase;
    this.bonus = bonus;
  }

  public double calcularSalario() {
    return (salarioBase + bonus) * 2 ;
  }

  public void realizarTarefa() {
    System.out.println("Gerente " + nome + " está realizando suas tarefas.");
  }
}
