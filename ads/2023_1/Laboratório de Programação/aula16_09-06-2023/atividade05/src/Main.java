public class Main {
  public static void main(String[] args) {
    Retangulo retangulo = new Retangulo(5, 3);
    double areaRetangulo = retangulo.calcularArea();
    double perimetroRetangulo = retangulo.calcularPerimetro();
    System.out.println("Retângulo - Área: " + areaRetangulo + ", Perímetro: " + perimetroRetangulo);

    Circulo circulo = new Circulo(4);
    double areaCirculo = circulo.calcularArea();
    double perimetroCirculo = circulo.calcularPerimetro();
    System.out.println("Círculo - Área: " + areaCirculo + ", Perímetro: " + perimetroCirculo);

    Triangulo triangulo = new Triangulo(6, 4, 5, 4, 3);
    double areaTriangulo = triangulo.calcularArea();
    double perimetroTriangulo = triangulo.calcularPerimetro();
    System.out.println("Triângulo - Área: " + areaTriangulo + ", Perímetro: " + perimetroTriangulo);
  }
}