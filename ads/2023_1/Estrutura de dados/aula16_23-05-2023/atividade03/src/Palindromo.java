public class Palindromo {
  public static boolean verificarPalindromo(String palavra) {
    if (palavra.length() <= 1) {
      return true;
    } else if (palavra.charAt(0) == palavra.charAt(palavra.length() - 1)) {
      String palavraMenor = palavra.substring(1, palavra.length() - 1);
      return verificarPalindromo(palavraMenor);
    } else {
      return false;
    }
  }
}