package src;

import java.util.Scanner;

public class Atividade04 {
    public static void main(String[] args) {

// Leia um conjunto de valores inteiros e em seguida os exiba-os na ordem inversa do que foram digitados.

        Scanner input = new Scanner(System.in);

        int values[] = new int[10];


        // Coletando os valores
        for (int i = 0; i < values.length; i++) {
            System.out.println("Digite o " + (i + 1) + "º valor");
            values[i] = input.nextInt();
        }

        // Ordem inversa dos valores
        System.out.println("Ordem inversa: ");
        for (int i = values.length - 1; i >= 0; i--) {
            System.out.print(values[i] + " ");
        }



    }
}