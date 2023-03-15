import java.util.Scanner;

public class atividade06 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite o dia: ");
        int dia = sc.nextInt();

        System.out.print("Digite o mês: ");
        int mes = sc.nextInt();

        System.out.print("Digite o ano: ");
        int ano = sc.nextInt();

        boolean dataValida = true;

        switch (mes) {
            case 2:
                if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
                    if (dia < 1 || dia > 29) {
                        dataValida = false;
                    }
                } else {
                    if (dia < 1 || dia > 28) {
                        dataValida = false;
                    }
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (dia < 1 || dia > 30) {
                    dataValida = false;
                }
                break;
            default:
                if (dia < 1 || dia > 31) {
                    dataValida = false;
                }
        }

        if (mes < 1 || mes > 12) {
            dataValida = false;
        }

        if (dataValida) {
            System.out.println("Data válida.");
        } else {
            System.out.println("Data inválida.");
        }

        sc.close();
    }

}
