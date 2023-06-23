class Veterinario extends Funcionario {
  private String especialidade;

  public Veterinario(String nome, String cargo, double salario, String especialidade) {
    super(nome, cargo, salario);
    this.especialidade = especialidade;
  }

  public void realizarExame(Animal animal) {
    System.out.println("Realizando exame no animal: " + animal.getNome());
  }
}