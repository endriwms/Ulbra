package src;

import java.util.Scanner;

public class Atividade05 {
    public static void main(String[] args) {


// Crie um vetor capaz de armazenar 50 números inteiros. Em seguida faça o seu preenchimento automático com os números de 101 a 150, ou seja, na posição número 0 ponha 101, na posição 1 ponha o número 102, e assim sucessivamente. Em seguida, exiba os valores deste vetor.

        Scanner input = new Scanner(System.in);

        int numbers[] = new int[50];

        System.out.println("Vetor preechido automaticamente: ");
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = 101 + i;
            System.out.print(numbers[i] + " ");
        }



    }
}