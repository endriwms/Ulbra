// 4. Imprima a tabuada do 9 (até o décimo valor).

import java.util.Scanner;

public class atividade02_4 {
    public static void main(String[] args) {
        Scanner numTabuada = new Scanner(System.in);

        System.out.println("Digite um número para a tabuada: ");
        int tabuadaDoNumero = numTabuada.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.printf("%d x %d = %d%n", tabuadaDoNumero, i, tabuadaDoNumero * i);
        }
    }
}
