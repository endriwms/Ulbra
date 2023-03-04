// 2. Imprima a soma dos números de 1 a 100, pulando de dois em dois (1, 3, 5, 7, etc.).

public class atividade02_2 {
    public static void main(String[] args) {
        int numero = 0;
        int somaImpressos = 0;

        while (somaImpressos < 100) {
            System.out.println("A soma é: " + numero);
            somaImpressos += numero;
            numero++;
        }
    }
}
