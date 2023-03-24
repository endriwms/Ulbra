public class Circunferencia {
    private double raio;

    public Circunferencia(double raio) {
        this.raio = raio;
    }

    public double calcularArea() {
        return Math.PI * raio * raio;
    }
}
