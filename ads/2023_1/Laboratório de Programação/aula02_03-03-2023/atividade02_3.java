// 3. Começando em 0, imprima os números seguintes, enquanto a soma dos números já
// impressos for menor que 100.

public class atividade02_3 {
    public static void main(String[] args) {
        int soma = 0;
        int numero = 0;

        while (soma < 100) {
            System.out.println(numero);
            soma += numero;
            numero++;
        }
    }
}
