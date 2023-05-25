public class Main {
  public static void main(String[] args) {
    int[] vetor = {1, 2, 3, 4, 5};
    int tamanho = vetor.length;
    int soma = SomarElementosVetor.somaElementos(vetor, tamanho);
    System.out.println("A soma dos elementos do vetor é: " + soma);
  }
}
