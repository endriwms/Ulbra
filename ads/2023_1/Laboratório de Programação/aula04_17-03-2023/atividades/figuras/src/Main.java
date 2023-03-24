public class Main {
    public static void main(String[] args) {
        // Criação dos objetos das figuras geométricas
        Triangulo triangulo = new Triangulo(5, 10);
        Quadrado quadrado = new Quadrado(7);
        Circunferencia circunferencia = new Circunferencia(4);
        Trapezio trapezio = new Trapezio(8, 5, 3);

        // Cálculo da área de cada figura
        double areaTriangulo = triangulo.calcularArea();
        double areaQuadrado = quadrado.calcularArea();
        double areaCircunferencia = circunferencia.calcularArea();
        double areaTrapezio = trapezio.calcularArea();

        // Impressão dos resultados
        System.out.println("Área do Triângulo: " + areaTriangulo);
        System.out.println("Área do Quadrado: " + areaQuadrado);
        System.out.println("Área da Circunferência: " + areaCircunferencia);
        System.out.println("Área do Trapézio: " + areaTrapezio);
    }
}