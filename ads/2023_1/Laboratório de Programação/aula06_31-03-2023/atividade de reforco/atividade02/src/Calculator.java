public class Calculator {
    public double sum(double num1, double num2) {
        return num1 + num2;
    }

    public double sub(double num1, double num2) {
        return num1 - num2;
    }

    public double multiply(double num1, double num2) {
        return num1 * num2;
    }

    public double divide(double num1, double num2) {
        if (num2 == 0) {
            throw new IllegalArgumentException("Não é possível dividir por zero!");
        }
        return num1 / num2;
    }
}
