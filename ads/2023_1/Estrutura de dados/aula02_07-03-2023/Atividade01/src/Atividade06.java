package src;

import java.util.Scanner;
import java.util.Random;

public class Atividade06 {
    public static void main(String[] args) {


// Crie um vetor capaz de armazenar 50 números inteiros. Em seguida faça o seu preenchimento automático de forma randômica. Em seguida, exiba os valores deste vetor.

        Scanner input = new Scanner(System.in);
        Random random = new Random();


        int numbers[] = new int[50];

       // Gerando números randômicos
        System.out.println("Preenchimento randômico: ");
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = random.nextInt(100);
            System.out.print(numbers[i] + " ");
        }


    }
}