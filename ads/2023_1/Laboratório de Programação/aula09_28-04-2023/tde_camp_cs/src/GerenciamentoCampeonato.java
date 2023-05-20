public class GerenciamentoCampeonato {
    public static void main(String[] args) {
        Equipe time1 = new Equipe("Time 1");
        Equipe time2 = new Equipe("Time 2");

        time1.registrarVitoria();
        time2.registrarDerrota();
        time1.registrarEmpate();
        time2.registrarEmpate();

        System.out.println("Equipe: " + time1.getNome());
        System.out.println("Vitórias: " + time1.getVitorias());
        System.out.println("Derrotas: " + time1.getDerrotas());
        System.out.println("Empates: " + time1.getEmpates());

        System.out.println("Equipe: " + time2.getNome());
        System.out.println("Vitórias: " + time2.getVitorias());
        System.out.println("Derrotas: " + time2.getDerrotas());
        System.out.println("Empates: " + time2.getEmpates());

        System.out.println("Aproveitamento do time 1: " + time1.CalcularAproveitamento());
        System.out.println("Aproveitamento do time 2: " + time2.CalcularAproveitamento());
    }
}
