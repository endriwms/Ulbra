public class atividade04 {
    public static void main(String[] args) {

        int n = 15;
        int a = 0, b = 1;

        System.out.print("Série de Fibonacci com " + n + " elementos: ");

        for (int i = 1; i <= n; ++i) {
            System.out.print(a + " ");

            int sum = a + b;
            a = b;
            b = sum;
        }
    }
}
