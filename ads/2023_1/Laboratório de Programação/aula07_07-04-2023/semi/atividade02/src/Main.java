// Crie uma classe chamada "Livro" com os seguintes atributos públicos: título, autor, editora e número de páginas. Crie um método chamado "exibirDetalhes" que imprima todas as informações do livro.

public class Main {
    public static void main(String[] args) {
        Book firstBook = new Book();
        firstBook.titulo = "O Hobbit";
        firstBook.autor = "J.R.R. Tolkien";
        firstBook.editora = "HarperCollins";
        firstBook.numPaginas = 300;

        firstBook.exibirDetalhes();
    }
}