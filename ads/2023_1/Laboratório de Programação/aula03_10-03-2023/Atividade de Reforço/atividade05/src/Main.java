/* Escreva um programa em Java que solicita um número
inteiro positivo e imprime todos os números ímpares
entre 1 e esse número. Utilize um loop for para realizar a
impressão. */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número inteiro positivo: ");
        int n = input.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                System.out.print(i + " ");
            }
        }
    }
}