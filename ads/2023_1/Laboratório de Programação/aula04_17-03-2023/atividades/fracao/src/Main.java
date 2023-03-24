public class Main {
    public static void main(String[] args) {

        // fração 1
        fracao f1 = new fracao();
        f1.definirValores(5,2);

        // fração 2
        fracao f2 = new fracao();
        f2.definirValores(1,7);

        // fração resultado
        fracao f3 = f1.multiplicar(f2);

        System.out.println(f3.obterFracao());
        System.out.println(f3.calcularValor());
    }
}