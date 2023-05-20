public class Main {
  public static void main(String[] args) {
    Gerente gerente = new Gerente("João", 5000.0, 2000.0);
    Vendedor vendedor = new Vendedor("Maria", 2500.0);
    Estagiario estagiario = new Estagiario("Pedro", 800.0);

    System.out.println("Informações do gerente:");
    gerente.realizarTarefa();
    System.out.println("Salário: R$ " + gerente.calcularSalario());

    System.out.println("Informações do vendedor:");
    vendedor.realizarTarefa();
    System.out.println("Salário: R$ " + vendedor.calcularSalario(5));

    System.out.println("Informações do estagiário:");
    estagiario.realizarTarefa();
    System.out.println("Bolsa auxílio: R$ " + estagiario.calcularSalario());
  }
}