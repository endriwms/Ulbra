// Implemente uma fila de String com as operações básicas de uma fila num vetor de 10 elementos.

public class Main {
  String[] vetor = new String;
  int fim;
  int inicio;

  public static void main(String[] args) {
    FilaDeString fila = new FilaDeString();
    fila.add("um");
  }

  void add(String value){
    fim++;
    vetor[fim] = value;
  }

  void remove(){
    for (int i = 0; i < fim; i++){
      vetor[i] = vetor[i+1];
    }
  }
}