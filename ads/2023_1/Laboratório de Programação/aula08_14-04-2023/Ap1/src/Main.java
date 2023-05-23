public class Main {
    public static void main(String[] args) {
        Estudante estudante1 = new Estudante();
        estudante1.setNome("Endriw");
        estudante1.setIdade(20);
        estudante1.setPontos(10);

        Estudante estudante2 = new Estudante();
        estudante2.setNome("Felipe");
        estudante2.setIdade(19);
        estudante2.setPontos(11);

        Gincana gincana = new Gincana();
        gincana.setNomeGincana("Dojo NodeJS");

        gincana.adicionarEstudante(estudante1);
        gincana.adicionarEstudante(estudante2);

        gincana.exibirVencedor();
    }
}