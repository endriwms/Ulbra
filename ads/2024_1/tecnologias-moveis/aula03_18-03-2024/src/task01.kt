fun main() {
  val nums = listOf(10.0, 20.0, 30.0, 40.0, 50.0);
  val average = getAverage(nums);

  println("A média aritmética é: $average");

}

fun getAverage(numsList: List<Double>): Double {
  if (numsList.isEmpty()) {
    println("A lista não pode estar vazia!");
  }

  val sum = numsList.sum();

  return sum / numsList.size;
}