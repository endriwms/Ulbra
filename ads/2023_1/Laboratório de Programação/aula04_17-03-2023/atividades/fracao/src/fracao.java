public class fracao {

    double numerador;
    double denominador;

    public double calcularValor() {
        if (denominador == 0) {
            return 0;
        }
        return numerador / denominador;
    }


    public fracao multiplicar(fracao f) {
        fracao result = new fracao();
        result.numerador = this.numerador * f.numerador;
        result.denominador = this.denominador * f.denominador;

        return result;
    }

    public void definirValores(double numerador, double denominador) {
        this.numerador = numerador;
        this.denominador = denominador;
    }

    public String obterFracao() {
        return numerador + "/" + denominador;
    }
}


