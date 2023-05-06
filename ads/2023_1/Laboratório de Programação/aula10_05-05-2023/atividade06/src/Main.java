public class Main {
  public static void main(String[] args) {
    Pessoa pessoa = new Pessoa();
    Estudante estudante = new Estudante();

    pessoa.falar(); // Imprime "A pessoa está falando."
    pessoa.andar(); // Imprime "A pessoa está andando."
    estudante.falar(); // Também imprime "A pessoa está falando."
    estudante.andar(); // Também imprime "A pessoa está andando."
    estudante.estudar(); // Imprime "O estudante está estudando."

  }
}