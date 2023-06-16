public class Main {
    public static void main(String[] args) {
        Documento documento = new Documento("Conteúdo do documento");
        Foto foto = new Foto("foto.png");

        documento.imprimir();
        foto.imprimir();
    }
}