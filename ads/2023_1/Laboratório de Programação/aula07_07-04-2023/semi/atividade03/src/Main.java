// Crie uma classe chamada "Animal" com os seguintes atributos públicos: nome, idade e espécie. Crie um método chamado "emitirSom" que imprima uma mensagem indicando que o animal está emitindo um som. Crie também um método chamado "dormir" que imprima uma mensagem indicando que o animal está dormindo.

public class Main {
    public static void main(String[] args) {
        Animal gato = new Animal();
        gato.nome = "Garfield";
        gato.idade = 5;
        gato.especie = "Felino";

        gato.emitirSom();
        gato.dormir();
    }
}