package AtividadeVetores;
import java.util.Scanner;

public class Atividade01 {
    public static void main(String[] args) {

        // Atividade 01
        // Escreva um programa que crie um array de inteiros data e use um laço for para criar um novo String que exiba o conteúdo do array data entre chaves e separado por vírgulas. Por exemplo, se o array data tiver tamanho 4 e armazenar os valores 3, 4, 1, 5, o String “{3, 4, 1, 5}” deve ser criado e exibido.

        Scanner input = new Scanner(System.in);

        int[] arrayData = {3, 4, 1, 5};

        System.out.print("{");
        for (int i = 0; i < arrayData.length; i++) {
            System.out.print(arrayData[i]);
            if (i != arrayData.length - 1) {
                System.out.print(", ");
            }
            else {
                System.out.print("}");
            }
        }
    }
}