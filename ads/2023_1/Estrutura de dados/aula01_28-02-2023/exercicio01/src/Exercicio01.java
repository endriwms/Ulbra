import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args) {
        System.out.println("Ola Galera");
        Scanner leitor= new Scanner(System.in);

        int vetor[] = new int[10];
        int vetor1[] = {1,2,3};


        short pequeno = 2; // -127 +127
        byte peqno2; //10...
        int ano = leitor.nextInt(); // Milhões
        long ano1; // dados maiores

        float teste;
        double teste1; //Casa decimal maior que float
        char test2; // Caracteres
        boolean treste1 //true /false;
        String nome = leitor.next();

        leitor.nextInt();
        leitor.next(); // Endriw Schiavenato -> Endriw
        leitor.nextLine(); // Endriw Schiavenato -> Endriw Schiavenato

        leitor.nextLine(); // Endriw Schiavenato -> Endriw Schiavenato

        if(pequeno == 3000){
            System.out.println("Igual a 2");
        }else{
            System.out.println("Diferente de 3000");
        }

        switch (pequeno) {
            case 1: {
                System.out.println("==1");
                break;
            }
            default: {
                System.out.println("Valor default");
            }
        }

        do {
            ///
        }while (pequeno<100);

        for (int i = 0; i < 100; i++){
            ///
        }
    }
}