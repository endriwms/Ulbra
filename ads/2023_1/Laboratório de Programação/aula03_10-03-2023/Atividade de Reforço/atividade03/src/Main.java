/* Escreva um programa em Java que solicita um número
inteiro positivo e imprime a tabuada desse número até o
número 10. Utilize um loop for para realizar a impressão. */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número inteiro positivo: ");
        int n = input.nextInt();

        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " x " + i + " = " + (n*i));
        }
    }
}