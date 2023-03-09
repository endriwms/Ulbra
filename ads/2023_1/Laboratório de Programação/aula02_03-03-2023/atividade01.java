// Um aluno tirou notas 8.5, 7.5 e 6.0 em provas que tinham peso 3, 2 e 5, respectivamente.
// Escreva um programa que imprima a média do aluno.

import java.util.Scanner;

public class atividade01 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n1, n2, n3, media;
        int p1, p2, p3;

        System.out.print("Digite a Primeira nota: ");
        n1 = input.nextInt();

        System.out.print("Digite o peso da primera prova: ");
        p1 = input.nextInt();

        System.out.print("Digite a Segunda nota: ");
        n2 = input.nextInt();
        System.out.print("Digite o peso da segunda prova: ");
        p2 = input.nextInt();

        System.out.print("Digite a Terceira nota: ");
        n3 = input.nextInt();
        System.out.print("Digite o peso da terceira prova: ");
        p3 = input.nextInt();

        media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

        System.out.print("A media do aluno é: " + media);
    }
}
