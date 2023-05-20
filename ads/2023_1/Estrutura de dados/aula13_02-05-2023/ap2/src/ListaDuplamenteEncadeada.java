public class ListaDuplamenteEncadeada {
    private No primeiro;
    private No ultimo;

    private static class No {
        public int valor;
        public No proximo;
        public No anterior;

        public No(int valor) {
            this.valor = valor;
            this.proximo = null;
            this.anterior = null;
        }
    }

    public ListaDuplamenteEncadeada() {
        this.primeiro = null;
        this.ultimo = null;
    }

    public void inserirInicio(int valor) {
        No novoNo = new No(valor);
        if (primeiro == null) {
            primeiro = novoNo;
            ultimo = novoNo;
        } else {
            novoNo.proximo = primeiro;
            primeiro.anterior = novoNo;
            primeiro = novoNo;
        }
    }

    public void inserirFim(int valor) {
        No novoNo = new No(valor);
        if (ultimo == null) {
            primeiro = novoNo;
            ultimo = novoNo;
        } else {
            novoNo.anterior = ultimo;
            ultimo.proximo = novoNo;
            ultimo = novoNo;
        }
    }

    public void removerInicio() {
        if (primeiro != null) {
            if (primeiro == ultimo) {
                primeiro = null;
                ultimo = null;
            } else {
                primeiro = primeiro.proximo;
                primeiro.anterior = null;
            }
        }
    }

    public void removerFim() {
        if (ultimo != null) {
            if (ultimo == primeiro) {
                ultimo = null;
                primeiro = null;
            } else {
                ultimo = ultimo.anterior;
                ultimo.proximo = null;
            }
        }
    }

    public int obter(int posicao) {
        int valor = -1;
        if (primeiro != null) {
            No noAtual = primeiro;
            int contador = 0;
            while (noAtual != null && contador < posicao) {
                noAtual = noAtual.proximo;
                contador++;
            }
            if (noAtual != null) {
                valor = noAtual.valor;
            }
        }
        return valor;
    }

    public void imprimir() {
        if (primeiro != null) {
            No noAtual = primeiro;
            while (noAtual != null) {
                System.out.print(noAtual.valor + " ");
                noAtual = noAtual.proximo;
            }
            System.out.println();
        }
    }

    public void imprimirReverso() {
        if (ultimo != null) {
            No noAtual = ultimo;
            while (noAtual != null) {
                System.out.print(noAtual.valor + " ");
                noAtual = noAtual.anterior;
            }
            System.out.println();
        }
    }

}