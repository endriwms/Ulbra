import java.util.Scanner;

public class Atividade01 {
    public static void main(String[] args) {

        // Solicitar a idade de um número indefinido de  pessoas e imprimir a média de idade lidas. O programa se encerra quando a média de idade for superior a 20 anos.

        Scanner input = new Scanner(System.in);

        int somaIdades = 0;
        int contadorPessoas = 0;
        double mediaIdade = 0.0;

        while (mediaIdade <= 20.0) {
            System.out.print("Digite a idade da pessoa: ");
            int idade = input.nextInt();
            somaIdades += idade;
            contadorPessoas++;
            mediaIdade = (double) somaIdades / contadorPessoas;
        }

        System.out.println("A média da idade é: " + mediaIdade);
        System.out.println("Programa encerrado...");
    }
}
