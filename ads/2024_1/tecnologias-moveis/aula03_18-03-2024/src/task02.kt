fun main() {
    val nums = listOf(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    val evenNumbers = filterEvenNumbers(nums);

    println("Números pares: $evenNumbers");
}

fun filterEvenNumbers(numsList: List<Int>): List<Int> {
    return numsList.filter { it % 2 == 0};
}