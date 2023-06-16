class Foto implements Imprimivel {
  private String nomeArquivo;

  public Foto(String nomeArquivo) {
    this.nomeArquivo = nomeArquivo;
  }

  @Override
  public void imprimir() {
    System.out.println("Imprimindo foto: " + nomeArquivo);
  }
}