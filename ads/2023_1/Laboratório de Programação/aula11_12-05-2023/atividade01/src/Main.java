public class Main {
  public static void main(String[] args) {
    Circulo circulo = new Circulo(5.0);
    Retangulo retangulo = new Retangulo(4.0, 6.0);
    Triangulo triangulo = new Triangulo(3.0, 4.0, 5.0);

    System.out.println("Círculo:");
    System.out.println("Área: " + circulo.calcularArea());
    System.out.println("Perímetro: " + circulo.calcularPerimetro());

    System.out.println("Retângulo:");
    System.out.println("Área: " + retangulo.calcularArea());
    System.out.println("Perímetro: " + retangulo.calcularPerimetro());

    System.out.println("Triângulo:");
    System.out.println("Área: " + triangulo.calcularArea());
    System.out.println("Perímetro: " + triangulo.calcularPerimetro());
  }
}