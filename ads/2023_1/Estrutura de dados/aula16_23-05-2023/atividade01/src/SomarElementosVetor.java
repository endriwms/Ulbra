public class SomarElementosVetor {
  public static int somaElementos(int[] vetor, int tamanho) {
    if (tamanho == 0) {
      return 0;
    } else {
      return vetor[tamanho - 1] + somaElementos(vetor, tamanho - 1);
    }
  }
}
