public class Main {
  public static void main(String[] args) {
    ArquivoTexto arquivoTexto = new ArquivoTexto("arquivo.txt");
    ArquivoImagem arquivoImagem = new ArquivoImagem("imagem.jpg");
    ArquivoAudio arquivoAudio = new ArquivoAudio("audio.mp3");

    System.out.println("Operações com arquivo de texto:");
    arquivoTexto.abrir();
    arquivoTexto.fechar();

    System.out.println("Operações com arquivo de imagem:");
    arquivoImagem.abrir();
    arquivoImagem.fechar();

    System.out.println("Operações com arquivo de áudio:");
    arquivoAudio.abrir();
    arquivoAudio.fechar();
  }
}