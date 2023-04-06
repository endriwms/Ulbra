// Crie uma classe chamada "Calculadora" com métodos públicos para realizar as operações básicas: somar, subtrair, multiplicar e dividir. Esses métodos devem receber dois números como argumentos e retornar o resultado da operação.

public class Main {
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        double resultadoSoma = calculator.sum(10, 5);
        System.out.println("Resultado da soma: " + resultadoSoma);

        double resultadoSubtracao = calculator.sub(10, 5);
        System.out.println("Resultado da subtração: " + resultadoSubtracao);

        double resultadoMultiplicacao = calculator.multiply(10, 5);
        System.out.println("Resultado da multiplicação: " + resultadoMultiplicacao);

        double resultadoDivisao = calculator.divide(10, 5);
        System.out.println("Resultado da divisão: " + resultadoDivisao);
    }
}