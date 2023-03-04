/* Escreva uma aplicação que efetua o cálculo do fatorial utilizando de forma recursiva (o
método de cálculo do fatorial chama ele mesmo). */

import java.util.Scanner;

public class atividade03_recursivo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um numero: ");
        int numero = input.nextInt();
        int fatorial = calcularNumero(numero);
        System.out.printf("O fatorial de %d é %d", numero, fatorial);
    }

    public static int calcularNumero(int numero) {
        if (numero == 0 || numero == 1) {
            return 1;
        } else {
            return numero * calcularNumero(numero - 1);
        }
    }
}
