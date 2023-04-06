// Crie uma classe chamada "Carro" com os seguintes atributos públicos: marca, modelo, ano e cor. Em seguida, crie um método chamado "acelerar" que imprima a mensagem "Acelerando o carro!". Crie também um método chamado "frear" que imprima a mensagem "Freando o carro!".

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.speedUp();
        myCar.brake();
    }
}