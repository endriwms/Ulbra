package AtividadeVetores;

import java.util.Random;
import java.util.Scanner;


public class Atividade03 {
    public static void main(String[] args) {

            // Atividade 03
       // Crie uma classe que armazena os 12 meses do ano em um array. A seguir, gere um valor randômico entre 0 e 11 e apresente o mês correspondente ao valor sorteado. Considere que o valor 0 corresponde ao mês de janeiro e o valor 11, ao mês de dezembro.


        Scanner input = new Scanner(System.in);

        String meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};


        // Gerando um número aleatório
        Random random= new Random();
        int numeroSorteado = random.nextInt(11);

        // Buscando o número e comparando com o array
        System.out.println("O mês sorteado é " + numeroSorteado +" = " + meses[numeroSorteado]);


    }
}