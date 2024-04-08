import kotlin.random.Random

class CharGenerator(private val min: Char, private val max: Char) {
  fun generate(): Char = Random.nextInt(min.code, max.code + 1).toChar()
}