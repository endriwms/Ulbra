public class atividade05_2 {
    public static void main(String[] args) {
        int x = 10;

        while (x <= 1000) {
            System.out.print(x + ", ");
            switch (x % 2) {
                case 0:
                    x += 5;
                    break;
                case 1:
                    x *= 2;
                    break;
            }
        }
    }
}
