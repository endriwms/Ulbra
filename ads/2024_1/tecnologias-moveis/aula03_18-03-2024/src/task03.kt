fun main() {
    val nums = listOf(1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10);
    val noDuplicatedList = removeDuplicated(nums);

    println("Lista sem números duplicados: $noDuplicatedList");
}
fun removeDuplicated(numsList: List<Int>): List<Int> {
    val noDuplicated = mutableListOf<Int>();

    numsList.forEach {
        if (!noDuplicated.contains(it)) {
            noDuplicated.add(it);
        }
    }
   return noDuplicated.toList();
}