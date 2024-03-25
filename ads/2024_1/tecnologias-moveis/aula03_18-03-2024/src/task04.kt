fun main() {
    val nums = listOf(2, 4, 6, 8, 10, 3, 7, 12);

    println("O último número impar é: ${getLastOddNumber(nums)}");
}

fun getLastOddNumber(numsList: List<Int>): Int? {
    return numsList.lastOrNull { it % 2 != 0 };
}