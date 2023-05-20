public class Estagiario extends Funcionario {
  private String nome;
  private double bolsaAuxilio;

  public Estagiario(String nome, double bolsaAuxilio) {
    this.nome = nome;
    this.bolsaAuxilio = bolsaAuxilio;
  }

  public double calcularSalario() {
    return bolsaAuxilio;
  }

  public void realizarTarefa() {
    System.out.println("Estagiário " + nome + " está realizando suas tarefas.");
  }
}