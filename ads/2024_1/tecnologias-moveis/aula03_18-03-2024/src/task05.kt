fun main() {
    val words = listOf("ENDRIW", "MORAES", "SCHIAVENATO");
    println("Strings maiúsculas: ${convertToUpperCase(words)}");
}
fun convertToUpperCase(stringsList: List<String>): List<String> {
    return stringsList.map { it.uppercase()};
}