import java.util.Scanner;

public class Atividade04 {
    public static void main(String[] args) {

        // Escrever um programa que receba vários números inteiros no teclado e no final imprimir a média dos números múltiplos de 3. Para sair digitar 0(zero).

        Scanner input = new Scanner(System.in);

        int numeros;
        int soma = 0;
        int contador = 0;

        System.out.print("Digite um valor inteiro ou 0 para sair: ");
        numeros = input.nextInt();

        while (numeros != 0){
            if (numeros % 3 == 0) {
                soma += numeros;
                contador++;
            }
            System.out.print("Digite um valor inteiro ou 0 para sair: ");
            numeros = input.nextInt();
        }

        if (contador > 0) {
            double media = (double) soma / contador;
            System.out.println("A média dos valores múltiplos de três é: " + media);
        } else {
            System.out.println("Nenhum valor múltiplo de três foi lido.");
        }
    }
}

