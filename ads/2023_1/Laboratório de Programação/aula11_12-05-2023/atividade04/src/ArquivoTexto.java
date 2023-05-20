class ArquivoTexto extends Arquivo {
  private String nomeArquivo;

  public ArquivoTexto(String nomeArquivo) {
    this.nomeArquivo = nomeArquivo;
  }

  public void abrir() {
    System.out.println("Abrindo arquivo de texto: " + nomeArquivo);
  }

  public void fechar() {
    System.out.println("Fechando arquivo de texto: " + nomeArquivo);
  }
}