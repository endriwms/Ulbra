public class Fatorial {
  public static int calcularFatorial(int numero) {
    if (numero == 0) {
      return 1;
    } else {
      return numero * calcularFatorial(numero - 1);
    }
  }
}