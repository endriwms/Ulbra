public class relogio {
    ponteiro ponteiroHora = new ponteiro();
    ponteiro ponteiroMinuto = new ponteiro();
    ponteiro ponteiroSegundo = new ponteiro();

    // acertar relogio a partir de uma hora, minuto e segundo
    public void acertarRelogio(int hora, int minuto, int segundo) {
        // a linha abaixo calcula o modulo da hora.
        // assim se for fornecido 13 por exemplo
        // � considerado o valor de 1
        hora = hora % 12;

        //acerta a posi��o de cada um dos ponteiros
        //a divis�o por 5 dos minutos e segundos � necess�ria para
        //converter o hor�rio em posi��o
        //Exemplo 45 minutos representam a posi��o 9 do ponteiro dos minutos
        ponteiroHora.posicao = hora;
        ponteiroMinuto.posicao = minuto/5;
        ponteiroSegundo.posicao = segundo/5;
    }

    public int lerHora() {
        return ponteiroHora.posicao;
    }
    public int lerMinuto() {
        return ponteiroMinuto.posicao*5;
    }
    public int lerSegundo() {
        return ponteiroSegundo.posicao*5;
    }


}