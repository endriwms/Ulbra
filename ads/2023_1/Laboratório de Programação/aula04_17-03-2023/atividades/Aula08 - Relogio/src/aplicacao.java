public class aplicacao {
    public static void main(String[] args) {

        // cria objeto relogio
        relogio r1 = new relogio();

        // acertar o relogio
        r1.acertarRelogio(3,30,50);

        // mostrar as posi��es dos ponteiros do rel�gio
        System.out.println("Posi��o da hora " + r1.ponteiroHora.posicao);
        System.out.println("Posi��o do minuto " + r1.ponteiroMinuto.posicao);
        System.out.println("Posi��o do segundo " + r1.ponteiroSegundo.posicao);

        int hora = r1.lerHora();;
        int minuto = r1.lerMinuto();
        int segundo = r1.lerSegundo();

        System.out.println("Hora: " + hora);
        System.out.println("Minuto: " + minuto);
        System.out.println("Segundo: " + segundo);

        System.out.println("");

        System.out.println("------------------------------");
        System.out.println("");
        relogio r2 = new relogio();
        r2.acertarRelogio(22,0,0);
        System.out.println("Valor da hora: " + r2.lerHora());

    }
}
