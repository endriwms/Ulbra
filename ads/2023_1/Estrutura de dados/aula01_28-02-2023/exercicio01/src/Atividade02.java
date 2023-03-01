import java.util.Scanner;

public class Atividade02 {
    public static void main(String[] args) {

        // Solicitar a idade de um número indefinido de pessoas e imprimir a média de idade lidas. O programa se encerra quando a média de idade for superior a 20 anos ou que tenha lido 10 pessoas.

        Scanner input = new Scanner(System.in);

        int somaIdades = 0;
        int contadorPessoas = 0;
        double mediaIdade = 0.0;

        while (mediaIdade <= 20) {
            if (contadorPessoas < 10) {
                System.out.println("Digite a idade da pessoa: ");
                int idade = input.nextInt();
                somaIdades += idade;
                contadorPessoas++;
                mediaIdade = (double) somaIdades / contadorPessoas;
            }
        }

        System.out.printf("A média da idade é: %.2f %n", mediaIdade);
        System.out.println("Programa encerrado...");
    }
}
