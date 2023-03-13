package src;

import java.util.Scanner;


public class Atividade02 {
    public static void main(String[] args) {


// Leia um conjunto de notas, cuja quantidade seja determinada pelo usuário. Calcule a média de todas elas. Exiba o conjunto das notas maiores do que a média calculada. Em seguida, de forma agrupada, exiba o outro conjunto de notas (menores do que a média).Utilize vetores
        Scanner input = new Scanner(System.in);

        System.out.print("Digite a quantidade de notas: ");
        int n = input.nextInt();

        double[] notes = new double[n];
        double sum = 0;

        // coletando as notas
        for (int i = 0; i < n; i++) {
            System.out.print("Digite a nota " + (i + 1) + ": ");
            notes[i] = input.nextDouble();
            sum += notes[i];
        }
        // média das notas
        System.out.println("");
        double average = sum / n;
        System.out.print("A média das notas é: " + average);
        System.out.println("");

        // Mostrando notas Superiores as da média
        System.out.print("Notas Superiores à média = ");
        for (int i = 0; i < n; i++) {
            if (notes[i] > average) {
                System.out.println(notes[i]);
            }
        }

        // Mostrando notas Inferiores as da média
        System.out.print("Notas Inferiores à média = ");
        for (int i = 0; i < n; i++) {
            if (notes[i] < average) {
                System.out.println(notes[i]);
            }
        }



    }
}