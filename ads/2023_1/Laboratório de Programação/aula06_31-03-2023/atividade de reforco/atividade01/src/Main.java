// Crie uma classe chamada "Carro" com os seguintes atributos públicos: marca, modelo, ano e cor. Em seguida, crie um método chamado "acelerar" que imprima a mensagem "Acelerando o carro!". Crie também um método chamado "frear" que imprima a mensagem "Freando o carro!".

import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  private static List<Car> cars = new ArrayList<>();
  public static void main(String[] args) {
    Scanner opt = new Scanner(System.in);
    Car carroSelecionado = null;

    while (true) {
      System.out.println("Opções:");
      System.out.println("1 - Criar um novo carro");
      System.out.println("2 - Listar todos os carros");
      System.out.println("3 - Selecionar um carro existente");
      System.out.println("4 - Destruir um carro");
      System.out.println("5 - Dirigir o carro selecionado");
      System.out.println("6 - Sair");
      System.out.println(" ");

      int option = opt.nextInt();

      switch (option) {
        case 1:
          // Create a new car

          Scanner scanner = new Scanner(System.in);
          System.out.println("Digite a marca do carro:");
          String brand = scanner.nextLine();

          System.out.println("Digite o modelo do carro:");
          String model = scanner.nextLine();

          System.out.println("Digite o ano do carro:");
          int year = scanner.nextInt();
          scanner.nextLine();

          System.out.println("Digite a cor do carro:");
          String color = scanner.nextLine();

          Car newCar;
          newCar = new Car();
          newCar.create(brand, model, year, color);
          cars.add(newCar);
          System.out.println("Carro criado com sucesso!");
          System.out.println(" ");
          break;
        case 2:
          // lista todos os carros
          Car.list(cars);
          break;
        case 3:
          // Seleciona um carro
          break;
        case 4:
          // Destroi um carro
          if (cars.isEmpty()) {
            System.out.println("Não há carros cadastrados!");
          } else {
            System.out.print("Digite o ID do carro a ser destruído: ");
            Scanner idSelect = new Scanner(System.in);
            int idToDelete = idSelect.nextInt();
            boolean carDeleted = false;
            for (int i = 0; i < cars.size(); i++) {
              Car car = cars.get(i);
              if (car.getId() == idToDelete) {
                cars.remove(i);
                System.out.println("Carro " + car.getBrand() + " " + car.getModel() + " destruído com sucesso!");
                System.out.println(" ");
                carDeleted = true;
                break;
              }
            }
            if (!carDeleted) {
              System.out.println("Não foi encontrado um carro com o ID informado!");
            }
          }
          break;
        case 5:
          // Dirige o carro selecionado
          // if (carroSelecionado == null) {
          // System.out.println("Nenhum carro selecionado.");
          // } else {
          // testDrive(carroSelecionado);
          // }
          System.exit(0);
          break;
        case 6:
          // Sai do programa
          break;
        default:
          System.out.println("Opção inválida.");
          break;
      }
    }
  }
}
