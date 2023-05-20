class ArquivoAudio extends Arquivo {
  private String nomeArquivo;

  public ArquivoAudio(String nomeArquivo) {
    this.nomeArquivo = nomeArquivo;
  }

  public void abrir() {
    System.out.println("Abrindo arquivo de áudio: " + nomeArquivo);
  }

  public void fechar() {
    System.out.println("Fechando arquivo de áudio: " + nomeArquivo);
  }
}