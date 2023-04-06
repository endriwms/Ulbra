// Crie uma classe chamada "Círculo" com um atributo público chamado "raio". Crie um método chamado "calcularArea" que retorne a área do círculo. Crie outro método chamado "calcularPerimetro" que retorne o perímetro do círculo.

public class Main {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.raio = 5;

        System.out.println("Área do círculo: " + c1.calcularArea());
        System.out.println("Perímetro do círculo: " + c1.calcularPerimetro());
    }
}