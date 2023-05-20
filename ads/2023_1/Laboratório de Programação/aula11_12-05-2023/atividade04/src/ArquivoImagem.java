class ArquivoImagem extends Arquivo {
  private String nomeArquivo;

  public ArquivoImagem(String nomeArquivo) {
    this.nomeArquivo = nomeArquivo;
  }

  public void abrir() {
    System.out.println("Abrindo arquivo de imagem: " + nomeArquivo);
  }

  public void fechar() {
    System.out.println("Fechando arquivo de imagem: " + nomeArquivo);
  }
}