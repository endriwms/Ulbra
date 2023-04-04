import java.util.List;
import java.util.Scanner;

public class Car {
  private static int lastId = 0;
  private int id;
  private String brand;
  private String model;
  private int year;
  private String color;
  private Boolean isAvailable;

  public Car() {
    this.id = ++lastId;
    this.brand = brand;
    this.model = model;
    this.year = year;
    this.color = color;
    this.isAvailable = true;
  }

  // Attribute access method
  public int getId() {
    return id;
  }

  public String getBrand(){
    return brand;
  }

  public void setBrand(String brand){
    Scanner scanner = new Scanner(System.in);
    System.out.println("Digite a marca do carro:");
    this.brand = scanner.nextLine();
  }

  public String getModel(){
    return model;
  }

  public void setModel(String Model){
    this.model = model;
  }

  public int getYear() {
    return year;
  }

  public void setYear(int year) {
    this.year = year;
  }

  public String getColor() {
    return color;
  }

  public void setColor(String color) {
    this.color = color;
  }

  public boolean isAvailable() {
    return isAvailable;
  }

  public void setIsAvailable(boolean isAvailable) {
      this.isAvailable = isAvailable;
  }

  public static boolean isEmpty(List<Car> cars) {
    return cars == null || cars.isEmpty();
  }

  // Métodos de CRUD
  public void create(String brand, String model, int year, String color) {
    this.brand = brand;
    this.model = model;
    this.year = year;
    this.color = color;
    this.isAvailable = true;
  }

  public void update(String brand, String model, int year, String color) {
    this.brand = brand;
    this.model = model;
    this.year = year;
    this.color = color;
  }

  public void destroy(List<Car> cars){
    cars.remove(this);
    System.out.println("Carro destruído com sucesso!");
  }

  public static void list(List<Car> cars) {
    if (isEmpty(cars)) {
      System.out.println("Nenhum carro cadastrado.");
      System.out.println(" ");
    } else {
      System.out.println(" ");
      System.out.print("Lista de carros:");
      for (Car car : cars) {
        System.out.println(car.toString());
      }
    }
  }
  @Override
  public String toString() {
    return "\nID: " + id + "\nMarca: " + brand + "\nModelo: " + model + "\nAno: " + year + "\nCor: " + color + "\nDisponível: " + (isAvailable ? "Sim" : "Não") + "\n";
  }
}
