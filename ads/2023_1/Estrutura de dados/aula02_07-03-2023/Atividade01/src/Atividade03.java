package src;

import java.util.Scanner;


public class Atividade03 {
    public static void main(String[] args) {

// Leia um conjunto de alunos, cada uma com o nome e a nota. Em seguida exiba o nome dos alunos que possuem a nota maior do que a média da turma
        Scanner input = new Scanner(System.in);


        System.out.print("Digite a quantidade de Alunos e notas: ");
        int n = input.nextInt();

        String names[] = new String[n];
        double notes[] = new double[n];
        double sum = 0;
        double average = 0;


        for (int i = 0; i < n ; i++) {
            System.out.println("Digite o nome do " + (i + 1) + "º Aluno");
            names[i] = input.next();
            System.out.println("Digite a nota do " + (i + 1) + "º Aluno");
            notes[i] = input.nextInt();
        }

        for (int i = 0; i < n; i++) {
            average = (sum += notes[i]) / n;
        }
        System.out.println("A média das notas é: " + average);


        for (int i = 0; i < n; i++) {
            if (notes[i] > average) {
                System.out.print("Alunos com nota superior à média: " + names[i]);
            }
        }



    }
}