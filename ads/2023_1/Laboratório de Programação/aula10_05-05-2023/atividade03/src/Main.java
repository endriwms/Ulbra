public class Main {
  public static void main(String[] args) {
    FiguraGeometrica figura = new FiguraGeometrica();
    Quadrado quadrado = new Quadrado(5);

    System.out.println("Área da figura: " + figura.calcularArea());
    System.out.println("Perímetro da figura: " + figura.calcularPerimetro());

    System.out.println("Área do quadrado: " + quadrado.calcularArea());
    System.out.println("Perímetro do quadrado: " + quadrado.calcularPerimetro());

  }
}