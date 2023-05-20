public class Equipe {
    private String nome;
    private int vitorias;
    private int derrotas;
    private int empates;

    private int pontos;

    public Equipe(String nome) {
        this.nome = nome;
        this.vitorias = 0;
        this.derrotas = 0;
        this.empates = 0;
        this.pontos = 0;
    }

    public double CalcularAproveitamento() {
        int totalDeJogos = this.vitorias + this.derrotas + this.empates;
        int pontosPossiveis = totalDeJogos * 3;
        double aproveitamento = 0;

        if (pontosPossiveis > 0) {
            aproveitamento = this.pontos / pontosPossiveis * 100;
        }
        return aproveitamento;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getVitorias() {
        return vitorias;
    }
    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }
    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }
    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public int getPontos() { return pontos; }
    public void setPontos(int pontos) {this.pontos = pontos; }

    public void registrarVitoria() {
        this.vitorias++;
        pontos = pontos + 3;
    }

    public void registrarEmpate() {
        this.empates++;
        pontos = pontos + 1;
    }

    public void registrarDerrota() {
        this.derrotas++;
    }
}
