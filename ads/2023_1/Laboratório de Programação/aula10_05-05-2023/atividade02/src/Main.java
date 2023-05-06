public class Main {
  public static void main(String[] args) {
    Veiculo veiculo = new Veiculo("Honda", "Civic");
    Carro carro = new Carro("Ford", "Fiesta", 4);

    System.out.println("O " + veiculo.getMarca() + " " + veiculo.getModelo() + " é um veículo.");
    System.out.println("O " + carro.getMarca() + " " + carro.getModelo() + " é um carro com capacidade para " + carro.getNumPassageiros() + " passageiros.");

  }
}