import java.util.Scanner;
public class main {
    public static void main(String[] args) {

        // fra��o 1
        fracao f1 = new fracao();
        f1.definirValores(5,2);

        // fra��o 2
        fracao f2 = new fracao();
        f2.definirValores(1,7);

        // fra��o resultado
        fracao f3 = f1.multiplicar(f2);

        System.out.println(f3.obterFracao());
        System.out.println(f3.calcularValor());


//    fracao numeradores = new fracao();
//    int resultadoNumeradores = numeradores.numerador1(2);
//    System.out.println("Numeradores: " + resultadoNumeradores);
//
//    fracao denominadores = new fracao();
//    int resultadoDenominadores = denominadores.denominador1(2);
//    System.out.println("Denominadores: " + resultadoDenominadores);
//
//
//    System.out.println("Fra��o: " + resultadoNumeradores + ("/") + resultadoDenominadores);
    }
}