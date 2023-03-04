/* Escreva uma aplicação que efetua o cálculo do fatorial utilizando a forma iterativa (usando
estruturas de repetição). */

import java.util.Scanner;

public class atividade03_iterativo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número para calcular o Fatorial: ");
        int numero = input.nextInt();
        int fatorial = 1;

        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        System.out.printf("O fatorial de %d é %d", numero, fatorial);
    }
}
