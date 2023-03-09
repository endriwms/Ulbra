package AtividadeVetores;
import java.util.Arrays;
import java.util.Scanner;

public class Atividade02 {
    public static void main(String[] args) {

        // Atividade 02
        // Elabore uma classe que receba 5 notas de alunos por meio, armazene essas notas em um array de cinco elementos, apresente em tela as cinco notas em ordem decrescente (da maior para a menor) e a média aritmética das notas.

        Scanner input = new Scanner(System.in);

        float notas[] = new float[5];

        // Laço do array de 5 notas
        for (int i = 0; i < notas.length; i++) {
            System.out.print("Digite a " + (i+1) + "ª nota do aluno: ");
            notas[i] = input.nextFloat();
        }

        // Linha em branco
        System.out.println("");

        // Ordem decrescente
        System.out.println("Notas em ordem decrescente: ");
        for (int i = notas.length-1; i >= 0; i--) {
            Arrays.sort(notas);
            System.out.println(notas[i]);
        }

        // Média das notas
        double media = soma / notas.length;
        System.out.println("Por fim a média das notas é: " + media);

    }
}