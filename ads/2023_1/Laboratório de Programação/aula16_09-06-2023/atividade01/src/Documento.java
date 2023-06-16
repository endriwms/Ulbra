class Documento implements Imprimivel {
  private String conteudo;

  public Documento(String conteudo) {
    this.conteudo = conteudo;
  }

  @Override
  public void imprimir() {
    System.out.println("Imprimindo documento:\n" + conteudo);
  }
}