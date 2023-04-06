// Crie uma classe chamada "Retângulo" com dois atributos públicos: base e altura. Crie um método chamado "calcularArea" que retorne a área do retângulo. Crie outro método chamado "calcularPerimetro" que retorne o perímetro do retângulo

public class Main {
    public static void main(String[] args) {
        Retangulo retangulo = new Retangulo();
        retangulo.base = 5;
        retangulo.altura = 3;

        double area = retangulo.calcularArea();
        System.out.println("Área do retângulo: " + area);

        double perimetro = retangulo.calcularPerimetro();
        System.out.println("Perímetro do retângulo: " + perimetro);
    }
}
