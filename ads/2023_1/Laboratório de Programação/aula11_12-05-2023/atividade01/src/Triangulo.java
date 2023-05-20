class Triangulo extends FormaGeometrica {
  private double ladoA;
  private double ladoB;
  private double ladoC;

  public Triangulo(double ladoA, double ladoB, double ladoC) {
    this.ladoA = ladoA;
    this.ladoB = ladoB;
    this.ladoC = ladoC;
  }

  public double calcularArea() {
    // Usando a fórmula de Heron para calcular a área do triângulo
    double p = (ladoA + ladoB + ladoC) / 2;
    return Math.sqrt(p * (p - ladoA) * (p - ladoB) * (p - ladoC));
  }

  public double calcularPerimetro() {
    return ladoA + ladoB + ladoC;
  }
}