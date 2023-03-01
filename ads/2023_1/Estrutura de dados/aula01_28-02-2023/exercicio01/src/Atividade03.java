import java.util.Scanner;

public class Atividade03 {
    public static void main(String[] args) {

        // Escrever um programa que leia, valores inteiros, até ser lido o valor -99. Quando isso acontecer, o programa deverá escrever a soma e a média dos valores lidos.

        Scanner input = new Scanner(System.in);
        int valores;
        int soma = 0;
        int contadorValores = 0;

        System.out.print("Digite um valor inteiro ou -99 para sair: ");
        valores = input.nextInt();

        while (valores != -99) {
            soma += valores;
            contadorValores++;
            System.out.print("Digite um valor inteiro ou -99 para sair: ");
            valores = input.nextInt();
        }

        if (contadorValores > 0) {
            double media = (double) soma / contadorValores;
            System.out.println("A soma dos valores lidos é: " + soma);
            System.out.println("A média dos valores lidos é: " + media);
        } else {
            System.out.println("Nenhum valor foi lido.");
        }
    }
}
