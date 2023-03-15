public class atividade05_1 {
    public static void main(String[] args) {

        int x = 10;

        while (x <= 1000) {
            System.out.print(x + ", ");
            if (x % 2 == 0) {
                x += 5;
            } else {
                x *= 2;
            }
        }
    }
}
