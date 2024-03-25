fun String.convertToUpperCase(): String = this.uppercase();

fun main() {
    val word = "Kotlin";
    println("Em maiúsculo: ${word.convertToUpperCase()}");
}