package src;

import java.util.Scanner;


public class Atividade01 {
    public static void main(String[] args) {

//        Escreva uma classe que Leia 5 nomes e notas de uma turma, calcula e exibe a média das notas da turma e em seguida exibe a relação de nomes cuja nota é superior a esta média. Utilize vetores para armazenar as notas.
        Scanner input = new Scanner(System.in);

        String names[] = new String[5];
        double notes[] = new double[5];
        double sum = 0;
        double average = 0;


        // Coletando os nomes e notas
        for (int i = 0; i < 5; i++) {
            System.out.println("Digite o nome do aluno " + (i + 1) + ": ");
            names[i] = input.next();
            System.out.println("Digite a nota do aluno " + (i + 1) + ": ");
            notes[i] = input.nextDouble();
        }


        // Calculando a média das notas
        for (int i = 0; i < 5; i++) {
           average = (sum += notes[i]) / 5;
        }
        System.out.println("A média das notas é: " + average);


        // Mostrando notas superiores as da média
        System.out.print("Alunos com notas superiores à média: ");
        for (int i = 0; i < 5; i++) {
            if (notes[i] > average) {
                System.out.println(names[i] + " - " + notes[i]);
            }

        }




    }
}